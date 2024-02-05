#pragma once
#include <string>
#include <SFML/Audio.hpp>

struct MusicOperator {
public:
	MusicOperator();

	static void PlayFromPath(char* path);
	static void playNext();
	static void playPrevious();
	static void playRandom();

	static void SetVolume(int volume);
	static float GetVolume();

	static void Pause();
	static void Play();

	/// <returns>A current song play time in seconds.</returns>
	static int getOfset();
	/// <param name="val">A current song play time in seconds.</param>
	static void setOfset(int val);
	/// <returns>Total song lenght in seconsds.</returns>
	static int getToalDuration();

	static void setLoop(bool val);
	static bool getLoop();

	static std::string getCurrentPath();
	static sf::Music::Status getStatus();

	static std::string getUpdatedPath();

	static std::vector<std::string> getPlayQueue();
	static void setPlayQueue(std::vector<std::string> data);

	static void setShuffle(bool val);
	static bool getShuffle();

	static void setStopped(bool val);
	static bool getStopped();

	static float getPlayPercentage();

	static bool getSongChanged();

	static std::vector<std::string>* getRecentPlays();

private:
	static void addToRecentPlays(std::string* path);

};

