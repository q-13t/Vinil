#pragma once
//Includes
#include <filesystem>
#include <fstream>
#include <string>
#include <vector>


struct DataOperator {

	static size_t ReadDataFolders();

	static std::vector<std::string>* GetSongpaths();

	static std::vector<std::string>* getMusicPaths();

	static void SaveDataFolders(const std::vector<std::string>* dirs);

	static std::vector<std::string>* getDirPaths();
};