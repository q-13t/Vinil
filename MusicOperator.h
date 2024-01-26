#pragma once
#include <string>
#include <SFML/Audio.hpp>

struct MusicOperator {
	 MusicOperator();
	 static void PlayFromPath(char* path);
	 static void SetVolume(int volume);
	 static float GetVolume();
	 static void Pause();
	 static void Play();
	 static int getOfset();
	 static void setOfset(int val);
	 static int getToalDuration();
	 static void setLoop(bool val);
	 static std::string getCurrentPath();
	 static sf::Music::Status getStatus();
};

