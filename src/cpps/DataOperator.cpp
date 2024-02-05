#include "../headers/DataOperator.h"


static std::vector<std::string> v_dirs;
static std::vector<std::string> v_musicPaths;
static std::vector<std::string> v_currentPlay;
static std::vector<std::string> checkedPathes;
static std::string currentPlaylist;

using namespace std;
using namespace std::filesystem;

FILETIME DataOperator::GetFileCreationTime(const string& filePath) {
	FILETIME creationTime = {};
	WIN32_FILE_ATTRIBUTE_DATA fileAttributes;
	if (GetFileAttributesExA(filePath.c_str(), GetFileExInfoStandard, &fileAttributes)) {
		creationTime = fileAttributes.ftCreationTime;
	}
	return creationTime;
}

/// <summary>
/// Reads folders containing songs and saves pathes to the folders.
/// </summary>
/// <returns>Ammount of found directories</returns>
size_t DataOperator::ReadDataFolders() {
	v_dirs.clear();
	if (::exists("./folders.txt")) {//If exists read folders file
		ifstream data("./folders.txt");
		if (data.is_open()) {
			string line;
			while (getline(data, line)) {
				v_dirs.push_back(line);
			}
			data.close();
		}
	}
	return v_dirs.size();
}
/// <summary>
/// Reads folders containing songs and saves pathse to the songs themselves.
/// </summary>
/// <returns>Pointer to found songs</returns>
vector<string>* DataOperator::GetSongpaths() {
	if (v_dirs.empty()) {//If there are no folders
		if (ReadDataFolders() == 0)return NULL;
	}
	v_musicPaths.clear();
	for (size_t i = 0; i < v_dirs.size(); i++) {
		for (auto&& entry : ::directory_iterator(v_dirs.at(i))) {
			if (entry.is_regular_file())
				v_musicPaths.push_back(entry.path().string());
		}
	}
	sort(
		v_musicPaths.begin(),
		v_musicPaths.end(),
		[](const string& path1, const string& path2) {
			FILETIME creationTime1 = GetFileCreationTime(path1);
			FILETIME creationTime2 = GetFileCreationTime(path2);
			return CompareFileTime(&creationTime1, &creationTime2) > 0;
		}
	);
	return &v_musicPaths;
}
/// <summary>
/// Reads folders containing songs and saves pathse to the songs themselves.
/// </summary>
/// <returns>Pointer to found songs</returns>
vector<string>* DataOperator::getReadyMusicPaths() {
	if (v_musicPaths.empty()) {
		GetSongpaths();
	}
	return &v_musicPaths;
}

vector<string>* DataOperator::getDirPaths() {
	return &v_dirs;
}


/// <returns>Saved playlists. If any exist.</returns>
vector<string> DataOperator::checkPlayListsDir()
{
	vector<string> playlistNames;
	if (!exists("./playlists") && !is_directory("./playlists")) {
		create_directory("./playlists");
	}
	else {
		for (auto&& entry : directory_iterator("./playlists")) {
			if (entry.is_regular_file() && entry.path().extension() == ".txt")
			{
				playlistNames.push_back(entry.path().filename().generic_string());
			}
		}
	}
	return playlistNames;
}


/// <param name="fileName">Name of playlist(without ".txt")</param>
/// <returns>Paths to songs in playlist</returns>
vector<string> DataOperator::getPlayListByName(string fileName)
{
	setCurrentPlayList(fileName);
	if (!fileName.ends_with(".txt")) {
		fileName += ".txt";
	}
	vector<string> playlistContent;
	if (::exists("./playlists/" + fileName)) {//If exists read folders file
		ifstream data("./playlists/" + fileName);
		if (data.is_open()) {
			string line;
			while (getline(data, line)) {
				playlistContent.push_back(line);
			}
			data.close();
		}
	}
	checkedPathes = playlistContent;
	return playlistContent;
}

std::string* DataOperator::getCurrentPlayList()
{
	return &currentPlaylist;
}

void DataOperator::setCurrentPlayList(std::string name)
{
	currentPlaylist = name;
}
/// <summary>
/// Renames currently selected playlist to new name.
/// </summary>
/// <param name="name">New name of playlist(without ".txt").</param>
void DataOperator::RenamePlayList(std::string* name)
{
	std::rename(("./playlists/" + currentPlaylist + ".txt").c_str(), ("./playlists/" + *name + ".txt").c_str());
	currentPlaylist = *name;
}
void DataOperator::DeletePlaylist()
{
	std::remove(("./playlists/" + currentPlaylist + ".txt").c_str());
	currentPlaylist = "";
}

vector<string>* DataOperator::getCheckedSongs()
{
	return &checkedPathes;
}



void DataOperator::SavePlayList(string fileName)
{
	if (!fileName.ends_with(".txt")) {
		fileName += ".txt";
	}
	ofstream data("./playlists/" + fileName);
	if (data.is_open()) {
		for (size_t i = 0; i < checkedPathes.size(); i++) {
			data << checkedPathes.at(i) << endl;
		}
	}
	checkedPathes.clear();
	data.close();
}

void DataOperator::SaveDataFolders(const vector<string>* dirs) {
	ofstream data("./folders.txt");
	v_dirs = *dirs;
	if (data.is_open()) {
		for (size_t i = 0; i < dirs->size(); i++) {
			data << dirs->at(i) << endl;
		}
	}
	data.close();
	ReadDataFolders();
}