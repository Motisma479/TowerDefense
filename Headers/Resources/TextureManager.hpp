#pragma once

#include <unordered_map>
#include <vector>
#include <memory>

#include "Resources/Texture.hpp"

class TextureManager
{
public:
	TextureManager();
	~TextureManager();

	void LoadTextureFolder(const char* folder);
	Resources::Texture* Get(const char* name);

private:
	std::unordered_map<std::string, std::unique_ptr<Resources::Texture>> data;
};