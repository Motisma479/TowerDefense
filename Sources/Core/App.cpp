#include "Core/App.hpp"
#include <iostream>

App::App() : exiting(false), gameState(GameState::MainMenu)
{
	appData =
	{
		{0,0}
	};
	
	textureManager.LoadTextureFolder("assets");
}

App::~App()
{
}

void App::UpdateMousePos(class GLFWwindow* _window)
{
	double X;
	double Y;
	glfwGetCursorPos(_window, &X, &Y);
	appData.mousePosition = { (float)X,(float)Y };
}

void App::Update(class GLFWwindow* _window)
{
	UpdateMousePos(_window);

	ImDrawList* draw_list = ImGui::GetBackgroundDrawList();
	Resources::Texture* test = textureManager.Get("mario");
	Resources::DrawTextureEx(*draw_list, *test, appData.mousePosition);
	ImVec2 p0 = ImGui::GetItemRectMin();
	ImVec2 p1 = ImGui::GetItemRectMax();
	ImVec4 mouse_data;
	
	ImVec2 size(320.0f, 180.0f);
	
}
