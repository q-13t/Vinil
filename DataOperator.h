#pragma once
//Includes
#include <filesystem>
#include <fstream>
#include <string>
#include <Windows.h>



struct DataOperator {

	static FILETIME GetFileCreationTime(const std::string& filePath);

	static size_t ReadDataFolders();

	static std::vector<std::string>* GetSongpaths();

	static std::vector<std::string>* getReadyMusicPaths();

	static std::vector<std::string>* getCheckedSongs();

	static void SaveDataFolders(const std::vector<std::string>* dirs);
	static void SavePlayList(std::string name);

	static std::vector<std::string>* getDirPaths();

	static std::vector<std::string> checkPlayListsDir();
	static std::vector<std::string> getPlayListByName(std::string fileName);
	
	static std::string* getCurrentPlayList();
	static void setCurrentPlayList(std::string name);

	static void RenamePlayList(std::string* name);
	static void DeletePlaylist();
};