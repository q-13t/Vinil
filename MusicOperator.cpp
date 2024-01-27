#include "MusicOperator.h"

static std::vector<std::string> playQueue;
static sf::Music player;
static std::string currentPath;
static bool loop = false;
static bool shuffle = false;
static bool wasStopped = false;
static int currentPos = 0;

MusicOperator::MusicOperator()
{
}

void MusicOperator::PlayFromPath(char* path)
{
	currentPos = std::find(playQueue.begin(), playQueue.end(), path) - playQueue.begin();
	player.openFromFile(path);
	currentPath = path;
	if (!wasStopped) { Play(); }
}

void MusicOperator::playNext()
{
	currentPath = playQueue.at(currentPos += 1);
	player.openFromFile(currentPath);
	if (!wasStopped) { Play(); }
}

void MusicOperator::playPrevious()
{
	currentPath = playQueue.at(currentPos -= 1);
	player.openFromFile(currentPath);
	if (!wasStopped) { Play(); }
}

void MusicOperator::playRandom()
{
	currentPos = rand() % (playQueue.size() + 1);
	currentPath = playQueue.at(currentPos);
	player.openFromFile(currentPath);
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
	loop = val;
	player.setLoop(val);
}

bool MusicOperator::getLoop()
{
	return loop;
}

std::string MusicOperator::getCurrentPath()
{
	if (currentPath.empty() && playQueue.size() > 0) {
		currentPath = playQueue.at(currentPos);
	}
	return currentPath;
}

sf::Music::Status MusicOperator::getStatus()
{
	return player.getStatus();
}

std::vector<std::string> MusicOperator::getPlayQueue()
{
	return playQueue;
}

void MusicOperator::setPlayQueue(std::vector<std::string> data)
{
	playQueue.clear();
	playQueue = data;
}

void MusicOperator::setShuffle(bool val)
{
	shuffle = val;
}

bool MusicOperator::getShuffle()
{
	return shuffle;
}

void MusicOperator::setStopped(bool val)
{
	wasStopped = val;
}

bool MusicOperator::getStopped()
{
	return wasStopped;
}

float MusicOperator::getPlayPercentage()
{
	float cur = static_cast<float>(MusicOperator::getOfset());
	float tot = static_cast<float>(MusicOperator::getToalDuration());
	float dif = cur / tot;
	return  dif;
}
