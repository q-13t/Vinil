#include "MusicOperator.h"

static sf::Music player;

MusicOperator::MusicOperator()
{
}

void MusicOperator::PlayFromPath(char* path)
{
	player.openFromFile(path);
	Play();
}

void MusicOperator::SetVolume(int volume)
{
	player.setVolume(volume);
}

void MusicOperator::Pause()
{
	player.pause();
}

void MusicOperator::Play()
{
	player.play();
}