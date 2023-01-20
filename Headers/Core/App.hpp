#pragma once
#include "Resources/TextureManager.hpp"

namespace Core
{
    struct Mouse
    {
        Core::Maths::Vec2 position;
        int state[3];
    };
    enum class GameState
    {
        MainMenu,
        Game,
        Editor,
        Setings
    };
    struct AppData
    {
        Mouse mouse;
        unsigned int frameCounter;
    };

    class App
    {
    public:
        App(GLFWwindow* _window);
        ~App();

        bool exiting;
        AppData appData;
        GameState gameState;
        GLFWwindow* window;
        Resources::TextureManager textureManager;

        void Update();
    protected:
        void UpdateMousePos();
        void UpdateMouseState();
        void UpdateWindowIcon();
    };
}