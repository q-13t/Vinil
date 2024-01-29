#pragma once
#include <string>
#include <SFML/Audio.hpp>

struct MusicOperator {
	 MusicOperator();
	 static void PlayFromPath(char* path);
	 static void playNext();
	 static void playPrevious();
	 static void playRandom();
	 static void SetVolume(int volume);
	 static float GetVolume();
	 static void Pause();
	 static void Play();
	 static int getOfset();
	 static void setOfset(int val);
	 static int getToalDuration();
	 static void setLoop(bool val);
	 static bool getLoop();
	 static std::string getCurrentPath();
	 static sf::Music::Status getStatus();
	 static std::vector<std::string> getPlayQueue();
	 static std::string getUpdatedPath();
	 static void setPlayQueue(std::vector<std::string> data);
	 static void setShuffle(bool val);
	 static bool getShuffle();
	 static void setStopped(bool val);
	 static bool getStopped();
	 static float getPlayPercentage();
	 static bool getSongChanged();
	 
	 
	 
};

