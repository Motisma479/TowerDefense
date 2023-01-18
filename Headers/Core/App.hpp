#pragma once
#include "Resources/TextureManager.hpp"

enum class GameState
{
    MainMenu,
    Game,
    Editor,
    Setings
};

struct AppData
{
    ImVec2 mousePosition;
    unsigned int frameCounter;
};

class App
{
public:
    App();
    ~App();

    bool exiting;

    AppData appData;

    GameState gameState;

    TextureManager textureManager;

    void Update(GLFWwindow* _window);
protected:
    void UpdateMousePos(GLFWwindow* _window);
    void UpdateWindowIcon(GLFWwindow* _window);
};
