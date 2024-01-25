#pragma once
#include <string>
#include <SFML/Audio.hpp>

struct MusicOperator {
	 MusicOperator();
	 static void PlayFromPath(char* path);
	 static void SetVolume(int volume);
	 static void Pause();
	 static void Play();
};

