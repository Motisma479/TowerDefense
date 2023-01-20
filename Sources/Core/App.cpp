#include "Core/App.hpp"
#include <iostream>

#include "UI/Button.hpp"
#include "Core/Maths/Maths.hpp"

int GmouseState[3] = { 0,0,0 };
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods)
{
	if (GmouseState[button] == GLFW_PRESS && button == GLFW_RELEASE)
	{
		GmouseState[button] = 2;
		return;
	}
	GmouseState[button] = action;
}

Core::App::App(GLFWwindow* _window) : exiting(false), gameState(GameState::MainMenu),window(_window)
{
	appData =
	{
		{{0,0},
		{0,0,0}},
		0
	};
	
	textureManager.LoadTextureFolder("assets");
	glfwSetMouseButtonCallback(window, mouse_button_callback);

}

Core::App::~App()
{
}

void Core::App::UpdateMousePos()
{
	double X;
	double Y;
	glfwGetCursorPos(window, &X, &Y);
	appData.mouse.position = { (float)X,(float)Y };
}
void Core::App::UpdateMouseState()
{
	for (int i = 0; i < 3; i++)
	{
		if (appData.mouse.state[i] == 2)
			GmouseState[i] = 0;
		appData.mouse.state[i] = GmouseState[i];
	}
}
void Core::App::UpdateWindowIcon()
{
	GLFWimage icon = textureManager.Get("icon")->GetGlfwImage();
	glfwSetWindowIcon(window, 1, &icon);
}
void Core::App::Update()
{
	UpdateMousePos();
	UpdateMouseState();
	UpdateWindowIcon();
	appData.frameCounter++;

	UI::Button testButton(*textureManager.Get("button"), { 200,200 }, { 5,5 }, WHITE, LIGHT_BLUE);
	if (testButton.Update(appData.mouse))
		std::cout << "debug" << std::endl;

	ImGui::GetBackgroundDrawList()->AddText(ImGui::GetFont(), 40, { 80,180 }, ImColor(0, 0, 0, 255), "Hello World");
	
	Resources::Texture* debug = textureManager.Get("mario");
	Resources::DrawTextureEx(*debug, appData.mouse.position);

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
