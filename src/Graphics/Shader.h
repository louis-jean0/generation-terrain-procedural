#ifndef SHADER_H
#define SHADER_H

class Shader;

#include <string>
#include <vector>
#include "Utils/Globals.h"
#include <memory>
#include <set>

#include "Graphics/ShaderElement.h"
#include "DataStructure/Matrix3.h"
#include "DataStructure/Matrix.h"
//#include <glm/glm.hpp>
#include <string>

class Shader
{
public:
    static std::shared_ptr<Shader> default_shader;
    static std::set<std::shared_ptr<Shader>> allShaders;
    Shader();
    Shader(Shader& copy);
    Shader(std::string vertexShaderFilename);
    Shader(std::string vertexShaderFilename, std::string fragmentShaderFilename);
    Shader(std::string vertexShaderFilename, std::string fragmentShaderFilename,
           std::string geometryShaderFilename);
//    Shader(const char* vertexShaderFilename);
//    Shader(const char* vertexShaderFilename, const char* fragmentShaderFilename);
//    Shader(const char* vertexShaderFilename, const char* fragmentShaderFilename,
//           const char* geometryShaderFilename);
    void compileShadersFromSource(std::map<std::string, std::string> addedDefinitions = std::map<std::string, std::string>(), std::vector<std::string> feedbackValues = {});

    bool use(bool update_source_files = false);

    void setBool(std::string pname, bool value);
    void setInt(std::string pname, int value);
    void setFloat(std::string pname, float value);
    void setVector(std::string pname, Vector3 value);
    void setVector(std::string pname, glm::vec2 value);
//    void setVector(std::string pname, glm::vec3 value);
    void setVector(std::string pname, glm::vec4 value);
    void setVector(std::string pname, float* value, int n);
    void setLightSource(std::string pname, LightSource& value);
    void addLightSource(std::string pname, LightSource& value);
    void clearLightSources(std::string pname);
    void setPositionalLight(std::string pname, PositionalLight& value);
    void setMaterial(std::string pname, Material& value);
    void setTexture2D(std::string pname, int index, Matrix3<int> texture);
    void setTexture2D(std::string pname, int index, int width, int height, int* data);
    void setTexture2D(std::string pname, int index, int width, int height, int** data);
    void setTexture3D(std::string pname, int index, Matrix3<float> texture);
//    void setMatrix(std::string pname, Matrix value);

    static void applyToAllShaders(std::function<void(std::shared_ptr<Shader>)> func);

    static std::string readShaderSource(std::string filename);
    static std::string addDefinitionsToSource(std::string src, std::map<std::string, std::string> newDefinitions);

    std::map<int, GLuint> textureSlotIndices;

    unsigned int programID = 0;
    std::string vertexShaderFilename = "";
    std::string fragmentShaderFilename = "";
    std::string geometryShaderFilename = "";

    std::map<std::string, std::string> definitions;

    int lightCount = 0;

    int vShader = -1;
    int fShader = -1;
    int gShader = -1;


    void setMat4(std::string pname, glm::mat4& values)
    {
        GlobalsGL::f()->glUniformMatrix4fv(GlobalsGL::f()->glGetUniformLocation(programID, pname.c_str()),
                                           1, GL_FALSE, &values[0][0]);
    }
    template<typename T>
    void setMatrix(std::string pname, std::vector<std::vector<T>> values)
    {
        int n = values.size(), m = values[0].size();
        T* vals = new T[n * m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                vals[i + j*n] = values[i][j];
        this->setMatrix(pname, vals, n, m);
    }
    template<typename T>
    void setMatrix(std::string pname, std::vector<T> values)
    {
        this->setMatrix(pname, &values.begin());
    }
    template<typename T>
    void setMatrix(const char* pname, T& values)
    {
        int numberOfElements = sizeof(values)/sizeof(*values);
        switch(numberOfElements)
        {
        case 4:
            this->setMatrix(pname, values, 2, 2);
            break;
        case 6:
            this->setMatrix(pname, values, 2, 3);
            break;
        case 8:
            this->setMatrix(pname, values, 2, 4);
            break;
        case 9:
            this->setMatrix(pname, values, 3, 3);
            break;
        case 12:
            this->setMatrix(pname, values, 3, 4);
            break;
        case 16:
            this->setMatrix(pname, values, 4, 4);
            break;
        default:
            throw std::invalid_argument("The size of the matrix to send to the shader is unusual");
        }
    }

    template<typename T>
    void setMatrix(std::string pname, T values[], int n, int m)
    {
//        if (this == nullptr) {
//            std::cerr << "No shader defined" << std::endl;
//            return;
//        }
        if (!this->use()) return;
        std::string numberOfElements = std::to_string(n) + "x" + std::to_string(m);
        if (numberOfElements == "2x2")
            GlobalsGL::f()->glUniformMatrix2fv(GlobalsGL::f()->glGetUniformLocation(programID, pname.c_str()),
                                               1, GL_FALSE, values);
        else if (numberOfElements == "2x3")
            GlobalsGL::f()->glUniformMatrix2x3fv(GlobalsGL::f()->glGetUniformLocation(programID, pname.c_str()),
                                               1, GL_FALSE, values);
        else if (numberOfElements == "3x2")
            GlobalsGL::f()->glUniformMatrix3x2fv(GlobalsGL::f()->glGetUniformLocation(programID, pname.c_str()),
                                               1, GL_FALSE, values);
        else if (numberOfElements == "2x4")
            GlobalsGL::f()->glUniformMatrix2x4fv(GlobalsGL::f()->glGetUniformLocation(programID, pname.c_str()),
                                               1, GL_FALSE, values);
        else if (numberOfElements == "4x2")
            GlobalsGL::f()->glUniformMatrix4x2fv(GlobalsGL::f()->glGetUniformLocation(programID, pname.c_str()),
                                               1, GL_FALSE, values);
        else if (numberOfElements == "3x3")
            GlobalsGL::f()->glUniformMatrix3fv(GlobalsGL::f()->glGetUniformLocation(programID, pname.c_str()),
                                               1, GL_FALSE, values);
        else if (numberOfElements == "3x4")
            GlobalsGL::f()->glUniformMatrix3x4fv(GlobalsGL::f()->glGetUniformLocation(programID, pname.c_str()),
                                               1, GL_FALSE, values);
        else if (numberOfElements == "4x3")
            GlobalsGL::f()->glUniformMatrix4x3fv(GlobalsGL::f()->glGetUniformLocation(programID, pname.c_str()),
                                               1, GL_FALSE, values);
        else if (numberOfElements == "4x4")
            GlobalsGL::f()->glUniformMatrix4fv(GlobalsGL::f()->glGetUniformLocation(programID, pname.c_str()),
                                               1, GL_FALSE, values);
        else
            throw std::invalid_argument("The size of the matrix to send to the shader is unusual");
    }
    template <class T>
    void setVector(std::string pname, std::vector<T> values)
    {
        return this->setVector(pname, values.data(), values.size());
    }
};

#endif // SHADER_H
