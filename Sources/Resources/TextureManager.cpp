#include "Resources/TextureManager.hpp"
#include <filesystem>
#include <iostream>

TextureManager::TextureManager()
{
}

TextureManager::~TextureManager()
{
}
void TextureManager::LoadTextureFolder(const char* folder)
{
	for (const auto& entry : std::filesystem::directory_iterator(folder))
	{
		std::cout << entry.path().filename() << " Loaded succesfully." << std::endl;
		Resources::Texture* temp = new Resources::Texture();
		temp->Create((std::string(folder) + "/" + entry.path().filename().string()).c_str());
		
		data.emplace(entry.path().filename().replace_extension("").string(), temp);

		int i = 0;
	}
}
Resources::Texture* TextureManager::Get(const char* name)
{
	std::unordered_map<std::string, Resources::Texture*>::const_iterator texture = data.find(name);
	
	if (texture->second == NULL)
		return nullptr;
	return texture->second;
}