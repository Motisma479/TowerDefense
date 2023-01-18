#include "Core/App.hpp"
#include <iostream>

App::App() : exiting(false), gameState(GameState::MainMenu)
{
	appData =
	{
		{0,0},
		0
	};
	
	textureManager.LoadTextureFolder("assets");
}

App::~App()
{
}

void App::UpdateMousePos(GLFWwindow* _window)
{
	double X;
	double Y;
	glfwGetCursorPos(_window, &X, &Y);
	appData.mousePosition = { (float)X,(float)Y };
}
void App::UpdateWindowIcon(GLFWwindow* _window)
{
	GLFWimage icon = textureManager.Get("icon")->GetGlfwImage();
	glfwSetWindowIcon(_window, 1, &icon);
}
void App::Update(GLFWwindow* _window)
{
	UpdateMousePos(_window);
	UpdateWindowIcon(_window);
	appData.frameCounter++;
	
	Resources::Texture* debug = textureManager.Get("mario");
	Resources::DrawTextureEx(*debug, appData.mousePosition);

	switch (gameState)
	{
	case GameState::MainMenu:
		break;
	case GameState::Game:
		break;
	case GameState::Editor:
		break;
	case GameState::Setings:
		break;
	default:
		break;
	}
}
