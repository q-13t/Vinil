#include "MusicOperator.h"

static sf::Music player;
static std::string currentPath;

MusicOperator::MusicOperator()
{
}

void MusicOperator::PlayFromPath(char* path)
{
	player.openFromFile(path);
	currentPath = path;
	Play();
}

void MusicOperator::SetVolume(int volume)
{
	player.setVolume(volume);
}

float MusicOperator::GetVolume()
{
	return player.getVolume();
}

void MusicOperator::Pause()
{
	player.pause();
}

void MusicOperator::Play()
{
	player.play();
}

int MusicOperator::getOfset()
{
	return player.getPlayingOffset().asSeconds();
}

void MusicOperator::setOfset(int val)
{
	player.setPlayingOffset(sf::seconds(val));
}

int MusicOperator::getToalDuration()
{
	return player.getDuration().asSeconds();
}

void MusicOperator::setLoop(bool val)
{
	player.setLoop(val);
}

std::string MusicOperator::getCurrentPath()
{
	return currentPath;
}

sf::Music::Status MusicOperator::getStatus()
{
	return player.getStatus();
}
