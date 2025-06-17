#include "Utils/Globals.h"

#include <string>
#include <fstream>

#define UNUSED(expr) (void)(expr)

std::default_random_engine random_gen::random_generator;
FastNoiseLite random_gen::perlinNoise;


QOpenGLContext* GlobalsGL::_context;
QOpenGLFunctions* GlobalsGL::_f;
QOpenGLExtraFunctions* GlobalsGL::_ef;
QOpenGLFunctions_4_5_Compatibility* GlobalsGL::_ef45;
//QOpenGLFunctions_4_6_Compatibility* GlobalsGL::_ef46;
GLuint GlobalsGL::_renderingProgram;
GLuint GlobalsGL::vao[numVAOs];
GLuint GlobalsGL::vbo[numVBOs];
GLuint GlobalsGL::currentBufferId = 0;
bool GlobalsGL::buffersGenerated = false;

QOpenGLContext* GlobalsGL::context() {
    if (GlobalsGL::_context == nullptr)
        GlobalsGL::_context = QOpenGLContext::currentContext();
    return GlobalsGL::_context;
}
QOpenGLFunctions_4_5_Compatibility* GlobalsGL::f() {
    return f45();
}
/*QOpenGLFunctions_4_6_Compatibility* GlobalsGL::f() {
    return f46();
}*/

QOpenGLFunctions_4_5_Compatibility *GlobalsGL::f45()
{
    if (GlobalsGL::_ef45 == nullptr) {
        _ef45 = GlobalsGL::context()->versionFunctions<QOpenGLFunctions_4_5_Compatibility>();
        if (_ef45) {
            _ef45->initializeOpenGLFunctions();
        } else {
            std::cerr << "No access to GL 4.5 functions" << std::endl;
        }
//        std::cout << _ef45->initializeOpenGLFunctions() << std::endl;
//        _ef45->glInvalidateFramebuffer();
//        GlobalsGL::_ef = GlobalsGL::context()->extraFunctions();
    }
    return GlobalsGL::_ef45;
}
/*
QOpenGLFunctions_4_6_Compatibility *GlobalsGL::f46()
{
    if (GlobalsGL::_ef46 == nullptr) {
        _ef46 = GlobalsGL::context()->versionFunctions<QOpenGLFunctions_4_6_Compatibility>();
        if(!_ef46) {
            std::cerr << "No access to GL 4.6 functions" << std::endl;
        }
        std::cout << _ef46->initializeOpenGLFunctions() << std::endl;
//        _ef45->glInvalidateFramebuffer();
//        GlobalsGL::_ef = GlobalsGL::context()->extraFunctions();
    }
    return GlobalsGL::_ef46;
}*/
QOpenGLExtraFunctions* GlobalsGL::ef() {
    if (GlobalsGL::_ef == nullptr) {
        GlobalsGL::_ef = GlobalsGL::context()->extraFunctions();
    }
    return GlobalsGL::_ef;
}
void GlobalsGL::generateBuffers()
{
#if useModernOpenGL
    if(GlobalsGL::buffersGenerated)
        return;
    GlobalsGL::f()->glGenVertexArrays(numVAOs, GlobalsGL::vao);
    GlobalsGL::f()->glBindVertexArray(GlobalsGL::vao[0]);
    GlobalsGL::f()->glGenBuffers(numVBOs, GlobalsGL::vbo);
#endif
    GlobalsGL::buffersGenerated = true;
}
GLuint GlobalsGL::newBufferId()
{
    return GlobalsGL::currentBufferId += 1; // Gives space for vertex, texture and normals
}

bool GlobalsGL::checkOpenGLError()
{
    bool error = false;
    int glErr = glGetError();
    while(glErr != GL_NO_ERROR)
    {
        std::cout << "[OpenGL] Error: " << glErr << std::endl;
        error = true;
        glErr = glGetError();
    }
    return !error;
}

bool GlobalsGL::printShaderErrors(GLuint shader)
{
#if useModernOpenGL
    int state = 0;
    GlobalsGL::f()->glGetShaderiv(shader, GL_COMPILE_STATUS, &state);
    if (state == 1)
        return true;
    int len = 0;
    int chWritten = 0;
    char* log;
    GlobalsGL::f()->glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &len);
    if (len > 0)
    {
        log = (char*)malloc(len);
        GlobalsGL::f()->glGetShaderInfoLog(shader, len, &chWritten, log);
        std::cout << "[OpenGL] Shader error: " << log << std::endl;
        free(log);
    }
#endif
    return false;
}
bool GlobalsGL::printProgramErrors(int program)
{

#if useModernOpenGL
    int state = 0;
    GlobalsGL::f()->glGetProgramiv(program, GL_LINK_STATUS, &state);
    if (state == 1)
        return true;
    int len = 0;
    int chWritten = 0;
    char* log;
    GlobalsGL::f()->glGetProgramiv(program, GL_INFO_LOG_LENGTH, &len);
    if (len > 0)
    {
        log = (char*)malloc(len);
        GlobalsGL::f()->glGetProgramInfoLog(program, len, &chWritten, log);
        std::cout << "[OpenGL] Program error: " << log << std::endl;
        free(log);
    }
#endif
    return false;
}

namespace {
    const std::unordered_map<GLenum, const char*> sourceMap = {
        {GL_DEBUG_SOURCE_API, "API"},
        {GL_DEBUG_SOURCE_WINDOW_SYSTEM, "Window System"},
        {GL_DEBUG_SOURCE_SHADER_COMPILER, "Shader Compiler"},
        {GL_DEBUG_SOURCE_THIRD_PARTY, "Third Party"},
        {GL_DEBUG_SOURCE_APPLICATION, "Application"},
        {GL_DEBUG_SOURCE_OTHER, "Other"}
    };

    const std::unordered_map<GLenum, const char*> typeMap = {
        {GL_DEBUG_TYPE_ERROR, "Error"},
        {GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR, "Deprecated"},
        {GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR, "Undefined Behavior"},
        {GL_DEBUG_TYPE_PORTABILITY, "Portability"},
        {GL_DEBUG_TYPE_PERFORMANCE, "Performance"},
        {GL_DEBUG_TYPE_MARKER, "Marker"},
        {GL_DEBUG_TYPE_PUSH_GROUP, "Push Group"},
        {GL_DEBUG_TYPE_POP_GROUP, "Pop Group"},
        {GL_DEBUG_TYPE_OTHER, "Other"}
    };

    const std::unordered_map<GLenum, const char*> severityMap = {
        {GL_DEBUG_SEVERITY_HIGH, "High"},
        {GL_DEBUG_SEVERITY_MEDIUM, "Medium"},
        {GL_DEBUG_SEVERITY_LOW, "Low"},
        {GL_DEBUG_SEVERITY_NOTIFICATION, "Notification"}
    };
}

void GLAPIENTRY GlobalsGL::MessageCallback(GLenum source, GLenum type, [[maybe_unused]] GLuint id,
                                        GLenum severity, [[maybe_unused]] GLsizei length,
                                        const GLchar* message, [[maybe_unused]] const void* userParam) {
    
    // Skip notifications
    if (severity == GL_DEBUG_SEVERITY_NOTIFICATION) {
        return;
    }

    std::cerr << "GL DEBUG CALLBACK:\n"
              << "Source: " << (sourceMap.count(source) ? sourceMap.at(source) : "Unknown") << "\n"
              << "Type: " << (typeMap.count(type) ? typeMap.at(type) : "Unknown")
              << " (0x" << std::hex << type << std::dec << ")\n"
              << "Severity: " << (severityMap.count(severity) ? severityMap.at(severity) : "Unknown")
              << " (0x" << std::hex << severity << std::dec << ")\n"
              << "Message: " << message << std::endl
              << "=================================" << std::endl;
}

// void GLAPIENTRY GlobalsGL::MessageCallback( GLenum source, GLenum type,
//                                             GLuint id, GLenum severity,
//                                             GLsizei length, const GLchar* message,
//                                             const void* userParam )
// {
//     UNUSED(source);
//     UNUSED(type);
//     UNUSED(length);
//     UNUSED(userParam);
//     return;
//     if (id == 131154) return; // Ignore "Pixel-path performance warning: Pixel transfer is synchronized with 3D rendering." due to screenshots
//     if (severity == GL_DEBUG_SEVERITY_HIGH || severity == GL_DEBUG_SEVERITY_MEDIUM || severity == GL_DEBUG_SEVERITY_LOW) {
//         std::string s_severity = (severity == GL_DEBUG_SEVERITY_HIGH ? "High" : severity == GL_DEBUG_SEVERITY_MEDIUM ? "Medium" : "Low");
//         std::cout << "Error " << id << " [severity=" << s_severity << "]: " << message << std::endl;
//     }
// }
