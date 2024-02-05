#pragma once
//Includes
#include <filesystem>
#include <fstream>
#include <string>
#include <Windows.h>



/// <summary>
/// An file and data operator that allows to save, delete or alter files necessary for the application.
/// </summary>
struct DataOperator {
public:
	static FILETIME GetFileCreationTime(const std::string& filePath);
	/// <summary>
	/// Reads folders containing songs and saves pathes to the folders.
	/// </summary>
	/// <returns>Ammount of found directories</returns>
	static size_t ReadDataFolders();

	/// <summary>
	/// Reads folders containing songs and saves pathse to the songs themselves.
	/// </summary>
	/// <returns>Pointer to found songs</returns>
	static std::vector<std::string>* getReadyMusicPaths();

	static std::vector<std::string>* getCheckedSongs();

	static void SaveDataFolders(const std::vector<std::string>* dirs);
	static void SavePlayList(std::string name);

	static std::vector<std::string>* getDirPaths();

	/// <returns>Saved playlists. If any exist.</returns>
	static std::vector<std::string> checkPlayListsDir();

	/// <param name="fileName">Name of playlist(without ".txt")</param>
	/// <returns>Paths to songs in playlist</returns>
	static std::vector<std::string> getPlayListByName(std::string fileName);

	static std::string* getCurrentPlayList();
	static void setCurrentPlayList(std::string name);
	/// <summary>
	/// Renames currently selected playlist to new name.
	/// </summary>
	/// <param name="name">New name of playlist(without ".txt").</param>
	static void RenamePlayList(std::string* name);
	static void DeletePlaylist();

private:
	/// <summary>
	/// Reads folders containing songs and saves pathse to the songs themselves.
	/// </summary>
	/// <returns>Pointer to found songs</returns>
	static std::vector<std::string>* GetSongpaths();
};