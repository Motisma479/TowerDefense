#pragma once

#ifdef _WIN32
#define WHITE			Resources::Color{ 255, 255, 255, 255 }		// White
#define BLACK			Resources::Color{ 0, 0, 0, 255 }			// Black
#define RED				Resources::Color{ 255, 0, 0, 255}			// Red
#define GREEN			Resources::Color{ 0, 255, 0, 255}			// Green
#define BLUE			Resources::Color{ 0, 0, 255, 255}			// Blue
#define ORANGE			Resources::Color{ 255, 106, 0, 255}			// Orange
#define YELLOW			Resources::Color{ 255, 216, 0, 255}			// Yellow
#define LIGHT_PURPLE	Resources::Color{ 170, 142, 214, 255}		// Light Purple
#define LIGHT_BLUE		Resources::Color{ 100, 184, 254, 255}		// Light Blue
#define BROWN			Resources::Color{ 137, 72, 54, 255}			// Brown
#define LIGHT_GRAY		Resources::Color{ 195, 195, 195, 255}		// Light Gray
#define GRAY			Resources::Color{ 140, 140, 140, 255}		// Gray
#else
#define WHITE			(Resources::Color){ 255, 255, 255, 255 }	// White
#define BLACK			(Resources::Color){ 0, 0, 0, 255 }			// Black
#define RED				(Resources::Color){ 255, 0, 0, 255}			// Red
#define GREEN			(Resources::Color){ 0, 255, 0, 255}			// Green
#define BLUE			(Resources::Color){ 0, 0, 255, 255}			// Blue
#define ORANGE			(Resources::Color){ 255, 106, 0, 255}		// Orange
#define YELLOW			(Resources::Color){ 255, 216, 0, 255}		// Yellow
#define LIGHT_PURPLE	(Resources::Color){ 170, 142, 214, 255}		// Light Purple
#define LIGHT_BLUE		(Resources::Color){ 100, 184, 254, 255}		// Light Blue
#define BROWN			(Resources::Color){ 137, 72, 54, 255}		// Brown
#define LIGHT_GRAY		(Resources::Color){ 195, 195, 195, 255}		// Light Gray
#define GRAY			(Resources::Color){ 140, 140, 140, 255}		// Gray
#endif // _WIN32

namespace Resources
{
	struct Color
	{
		int r, g, b, a;
	};
}