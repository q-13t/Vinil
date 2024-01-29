#include "DataOperator.h"
#include <Windows.h>

static std::vector<std::string> v_dirs;
static std::vector<std::string> v_musicPaths;
static std::vector<std::string> v_currentPlay;


FILETIME GetFileCreationTime(const std::string& filePath) {
	FILETIME creationTime = {};
	WIN32_FILE_ATTRIBUTE_DATA fileAttributes;
	if (GetFileAttributesExA(filePath.c_str(), GetFileExInfoStandard, &fileAttributes)) {
		creationTime = fileAttributes.ftCreationTime;
	}
	return creationTime;
}

size_t DataOperator::ReadDataFolders() {
	v_dirs.clear();
	if (std::filesystem::exists("./folders.txt")) {//If exists read folders file
		std::ifstream data("./folders.txt");
		if (data.is_open()) {
			std::string line;
			while (std::getline(data, line)) {
				v_dirs.push_back(line);
			}
			data.close();
		}
	}
	return v_dirs.size();
}

std::vector<std::string>* DataOperator::GetSongpaths() {
	if (v_dirs.empty()) {
		if (ReadDataFolders() == 0)return NULL;
	}
	v_musicPaths.clear();
	for (size_t i = 0; i < v_dirs.size(); i++) {
		for (auto&& entry : std::filesystem::directory_iterator(v_dirs.at(i))) {
			if (entry.is_regular_file())
				v_musicPaths.push_back(entry.path().string());
		}
	}
	std::sort(v_musicPaths.begin(),v_musicPaths.end(), [](const std::string& path1, const std::string& path2) {
		FILETIME creationTime1 = GetFileCreationTime(path1);
		FILETIME creationTime2 = GetFileCreationTime(path2);
		// Compare file creation times
		return CompareFileTime(&creationTime1, &creationTime2) > 0;
		});
	return &v_musicPaths;
}

std::vector<std::string>* DataOperator::getReadyMusicPaths() {
	if (v_musicPaths.empty()) {
		GetSongpaths();
	}
	return &v_musicPaths;
}

std::vector<std::string>* DataOperator::getDirPaths() {
	return &v_dirs;
}

void DataOperator::SaveDataFolders(const std::vector<std::string>* dirs) {
	std::ofstream data("./folders.txt");
	v_dirs = *dirs;
	if (data.is_open()) {
		for (size_t i = 0; i < dirs->size(); i++) {
			data << dirs->at(i) << std::endl;
		}
	}
	data.close();
	ReadDataFolders();
}