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
		std::unique_ptr<Resources::Texture> temp = std::make_unique<Resources::Texture>();
		temp->Create((std::string(folder) + "/" + entry.path().filename().string()).c_str());
		
		data.emplace(entry.path().filename().replace_extension("").string(), std::move(temp));

		int i = 0;
	}
}
Resources::Texture* TextureManager::Get(const char* name)
{
	std::unordered_map<std::string, std::unique_ptr<Resources::Texture>>::const_iterator texture = data.find(name);
	
	if (texture->second == NULL)
		return nullptr;
	return texture->second.get();
}