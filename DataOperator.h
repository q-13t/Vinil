#pragma once
//Includes
#include <filesystem>
#include <fstream>
#include <string>
#include <vector>
#include <Windows.h>

struct DataOperator {
	
	static FILETIME GetFileCreationTime(const std::string& filePath);

	static size_t ReadDataFolders();

	static std::vector<std::string>* GetSongpaths();

	static std::vector<std::string>* getReadyMusicPaths();

	static void SaveDataFolders(const std::vector<std::string>* dirs);

	static std::vector<std::string>* getDirPaths();
};