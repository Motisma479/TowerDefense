#pragma once
#include "Core/Maths/Maths.hpp"
#include "Resources/Color.hpp"
namespace Resources
{
	class Texture;
}
namespace Core
{
	struct Mouse;
}

namespace UI
{
	class Button
	{
	public:
		Button(Resources::Texture& texture, Core::Maths::Vec2 pos, Core::Maths::Vec2 size, Resources::Color baseColor, Resources::Color hoveredColor);
		~Button();

		bool Update(Core::Mouse mouse);
	private:
		Resources::Texture& pTexture;
		Core::Maths::Vec2 pPos;
		Core::Maths::Vec2 pSize;
		Resources::Color pBaseColor;
		Resources::Color pHoveredColor;
		Resources::Color curentColor;
		bool isHovered(Core::Maths::Vec2 mousePos);
	};
}