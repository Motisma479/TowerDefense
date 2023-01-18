#include <stdio.h>
#include <math.h>
#include <stb_image.h>
#include <GLFW/glfw3.h>

#include "Resources/Texture.hpp"

typedef void (*glGenerateMipmapFuncType)(GLenum);

void Resources::Texture::Create(const char* file)
{
    stbi_uc* pixels = stbi_load(file, &pWidth, &pHeight, NULL, STBI_rgb_alpha);
    if (pixels == nullptr)
    {
        fprintf(stderr, "Cannot load texture '%s'\n", file);
    }

    // Create texture on OpenGL side
    GLuint texture;
    glGenTextures(1, &texture);
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, pWidth, pHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, pixels);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);

    // Gen mipmaps
    glGenerateMipmapFuncType glGenerateMipmapFunc = (glGenerateMipmapFuncType)glfwGetProcAddress("glGenerateMipmap");
    if (glGenerateMipmapFunc == nullptr)
        fprintf(stderr, "Cannot load glGenerateMipmap func\n");
    else
        glGenerateMipmapFunc(GL_TEXTURE_2D);

    // Unbind
    glBindTexture(GL_TEXTURE_2D, 0);

    // Free ram
    stbi_image_free(pixels);

    pId = (ImTextureID)((size_t)texture);
}

void Resources::Texture::Delete()
{
    GLuint temp = (GLuint)((size_t)pId);
    glDeleteTextures(1, &temp);
}

int Resources::Texture::width()
{
    return pWidth;
}
int Resources::Texture::height()
{
    return pHeight;
}
ImTextureID Resources::Texture::id()
{
    return pId;
}

void Resources::DrawTextureEx(Texture& tex, ImVec2 pos, ImVec2 scale, float angle, Resources::Color color)
{
    // Unit quad centered in 0
    ImVec2 p[4] = {
        { -0.5f, -0.5f },
        {  0.5f, -0.5f },
        {  0.5f,  0.5f },
        { -0.5f,  0.5f },
    };

    ImVec2 uv[4] = {
        { 0.f, 0.f },
        { 1.f, 0.f },
        { 1.f, 1.f },
        { 0.f, 1.f },
    };
    // Transform quad (scale + rotate + translate)
    float c = cosf(angle);
    float s = sinf(angle);
    for (int i = 0; i < 4; ++i)
    {
        p[i].x *= tex.width() * scale.x;
        p[i].y *= tex.height() * scale.y;
        float px = p[i].x;
        p[i].x = p[i].x * c - p[i].y * s;
        p[i].y = p[i].y * c + px * s;
        p[i].x += pos.x;
        p[i].y += pos.y;
    }
    
    ImGui::GetBackgroundDrawList()->AddImageQuad(tex.id(),
        p[0], p[1], p[2], p[3],
        uv[0], uv[1], uv[2], uv[3],
        //IM_COL32_WHITE
        IM_COL32(color.r, color.g, color.b, color.a)
    );
}