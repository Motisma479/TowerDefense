#pragma once

#include <imgui.h>
#include <GLFW/glfw3.h>

#include "Resources/Color.hpp"

namespace Resources
{
    class Texture
    {
    private:
        ImTextureID pId;
        int pWidth;
        int pHeight;
        unsigned char* pPixels;
    public:

        void Create(const char* file);
        void Delete();

        GLFWimage GetGlfwImage();

        int width();
        int height();
        ImTextureID id();
        unsigned char* pixels();
    };
    void DrawTextureEx(Texture& tex, ImVec2 pos, ImVec2 scale = { 1.f, 1.f }, float angle = 0.f, Resources::Color color = WHITE);
}