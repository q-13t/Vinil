#include "DataOperator.h"

static std::vector<std::string> v_dirs;
static std::vector<std::string> v_musicPaths;
static std::vector<std::string> v_currentPlay;

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
	return &v_musicPaths;
}

std::vector<std::string>* DataOperator::getMusicPaths() {
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