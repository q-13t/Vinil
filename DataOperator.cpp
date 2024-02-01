#include "DataOperator.h"


static std::vector<std::string> v_dirs;
static std::vector<std::string> v_musicPaths;
static std::vector<std::string> v_currentPlay;
static std::vector<std::string> checkedPathes;

using namespace std;
using namespace std::filesystem ;

FILETIME DataOperator::GetFileCreationTime(const string& filePath) {
	FILETIME creationTime = {};
	WIN32_FILE_ATTRIBUTE_DATA fileAttributes;
	if (GetFileAttributesExA(filePath.c_str(), GetFileExInfoStandard, &fileAttributes)) {
		creationTime = fileAttributes.ftCreationTime;
	}
	return creationTime;
}

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

vector<string>* DataOperator::GetSongpaths() {
	if (v_dirs.empty()) {
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

vector<string>* DataOperator::getReadyMusicPaths() {
	if (v_musicPaths.empty()) {
		GetSongpaths();
	}
	return &v_musicPaths;
}

vector<string>* DataOperator::getDirPaths() {
	return &v_dirs;
}

/// <summary>
/// 
/// </summary>
/// <returns>std::vector<std::string>* containing playlists names if "./playlists" exists or not initialized std::vector<std::string>*.</returns>
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


vector<string> DataOperator::getPlayListByName(string fileName)
{
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
	return playlistContent;
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