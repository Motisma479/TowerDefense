#pragma once

#include <imgui.h>

#include "Resources/Color.hpp"

namespace Resources
{
    class Texture
    {
    private:
        ImTextureID pId;
        int pWidth;
        int pHeight;
    public:

        void Create(const char* file);
        void Delete();

        int width();
        int height();
        ImTextureID id();
    };

    void DrawTextureEx(Texture& tex, ImVec2 pos, ImVec2 scale = { 1.f, 1.f }, float angle = 0.f, Resources::Color color = WHITE);
}