#pragma once

#include <unordered_map>
#include <vector>

#include "Resources/Texture.hpp"

class TextureManager
{
public:
	TextureManager();
	~TextureManager();

	void LoadTextureFolder(const char* folder);
	Resources::Texture* Get(const char* name);

private:
	std::unordered_map<std::string, Resources::Texture*> data;
};