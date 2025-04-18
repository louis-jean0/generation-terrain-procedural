#pragma once

#include "Utils/Globals.h"  // #include <glad/glad.h>
#include <iostream>
#include <glm/glm.hpp>

namespace gfx {
class RenderTexture {
private:
    glm::ivec2 tex_dim;

public:
    RenderTexture() {create();}
    ~RenderTexture() {destroy();}
    
    void create() {
        GlobalsGL::f()->glGenFramebuffers(1, &fbo_id);
        GlobalsGL::f()->glGenTextures(1, &color_id);
        GlobalsGL::f()->glGenTextures(1, &depth_id);
    }

    void destroy() {
        GlobalsGL::f()->glDeleteTextures(1, &depth_id);
        GlobalsGL::f()->glDeleteTextures(1, &color_id);
        GlobalsGL::f()->glDeleteFramebuffers(1, &fbo_id);
    }

    /**
     * @brief Bind framebuffer for rendering to texture
     */
    void bind_framebuffer() {
        GlobalsGL::f()->glBindFramebuffer(GL_FRAMEBUFFER, fbo_id);
    }

    /**
     * @brief Unbind framebuffer for resetting render target
     */
    void unbind_framebuffer() {
        GlobalsGL::f()->glBindFramebuffer(GL_FRAMEBUFFER, 0);
    }

    void set_texture_size(int w, int h) {
        if (!fbo_id) { create(); }
        if (w != tex_dim.x || h != tex_dim.y) {
            tex_dim = {w, h};
            bind_framebuffer();
            glBindTexture(GL_TEXTURE_2D, color_id);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_BGRA, GL_UNSIGNED_BYTE, NULL);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

            glBindTexture(GL_TEXTURE_2D, depth_id);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT, w, h, 0, GL_DEPTH_COMPONENT, GL_FLOAT, NULL);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

            // attach texture to framebuffer
            GlobalsGL::f()->glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, color_id, 0);
            GlobalsGL::f()->glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, depth_id, 0);

            if (GlobalsGL::f()->glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE)
	            std::cout << "ERROR::FRAMEBUFFER:: Framebuffer is not complete!" << std::endl;

            unbind_framebuffer();
        }
    }

    GLuint fbo_id = 0;
    GLuint color_id = 0, depth_id = 0;
};
}
