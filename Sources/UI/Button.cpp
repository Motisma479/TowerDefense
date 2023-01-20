#include "UI/Button.hpp"
#include "Core/Maths/Maths.hpp"
#include "Resources/Texture.hpp"
#include "Resources/Color.hpp"
#include "Core/App.hpp"
UI::Button::Button(Resources::Texture& texture, Core::Maths::Vec2 pos, Core::Maths::Vec2 size, Resources::Color baseColor, Resources::Color hoveredColor) 
	: pTexture(texture), pPos(pos), pSize(size), pBaseColor(baseColor), pHoveredColor(hoveredColor)
{
}

UI::Button::~Button()
{
}
bool UI::Button::isHovered(Core::Maths::Vec2 mousePos)
{
	if (mousePos >= pPos - (Core::Maths::Vec2(pTexture.width(),pTexture.height())* pSize/2)&&
		mousePos <= pPos + (Core::Maths::Vec2(pTexture.width(), pTexture.height()) * pSize / 2))
		return true;
	return false;
}
bool UI::Button::Update(Core::Mouse mouse)
{
	if (isHovered(mouse.position))
	{
		curentColor = pHoveredColor;
		if (mouse.state[0] == 2)
			return true;
	}
	else
	{
		curentColor = pBaseColor;
	}
	Resources::DrawTextureEx(pTexture, pPos, pSize, 0, curentColor);

	return false;
}