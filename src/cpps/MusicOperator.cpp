#include "../headers/MusicOperator.h"

static std::vector<std::string> playQueue;
static std::vector<std::string> recentPlays;
static sf::Music player;
static std::string currentPath;
static bool loop = false;
static bool shuffle = false;
static bool wasStopped = false;
static bool songChanged = false;
static int currentPos = 0;
static int recentPos = 0;


MusicOperator::MusicOperator()
{

}

void MusicOperator::PlayFromPath(char* path)
{
	currentPos = std::find(playQueue.begin(), playQueue.end(), path) - playQueue.begin();
	if (&currentPath != nullptr) {
		player.openFromFile(currentPath);
	}
	currentPath = path;
	addToRecentPlays(&currentPath);

	if (!wasStopped) { Play(); }
	songChanged = true;
}

void MusicOperator::playNext()
{
	if (++recentPos < recentPlays.size()) {
		currentPath = recentPlays.at(recentPos);
	}
	else if (shuffle) {
		playRandom();
		return;
	}
	else {
		if (currentPos > playQueue.size())currentPos = -1;
		currentPath = playQueue.at(++currentPos);
		addToRecentPlays(&currentPath);
	}
	if (&currentPath != nullptr) {
		player.openFromFile(currentPath);
	}
	if (!wasStopped) { Play(); }
	songChanged = true;
}

void MusicOperator::playPrevious()
{
	if (recentPos - 1 >= 0 && recentPlays.size() > 0) {
		currentPath = recentPlays.at(--recentPos);
	}
	else {
		if (currentPos <= 0) currentPos = playQueue.size();
		currentPath = playQueue.at(--currentPos);
		addToRecentPlays(&currentPath);
	}
	if (&currentPath != nullptr) {
		player.openFromFile(currentPath);
	}
	if (!wasStopped) { Play(); }
	songChanged = true;
}

void MusicOperator::playRandom()
{
	srand(time(NULL));
	currentPos = rand() % (playQueue.size() + 1);
	currentPath = playQueue.at(currentPos);
	if (&currentPath != nullptr) {
		player.openFromFile(currentPath);
	}
	addToRecentPlays(&currentPath);
	if (!wasStopped) { Play(); }
	songChanged = true;

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

void MusicOperator::Play() {
	try
	{
		player.play();
	}
	catch (const std::exception& e )
	{
		System::Console::WriteLine("MusicOperator::Play() ERROR");
	}
}

/// <returns>A current song play time in seconds.</returns>
int MusicOperator::getOfset()
{
	return player.getPlayingOffset().asSeconds();
}

/// <param name="val">A current song play time in seconds.</param>
void MusicOperator::setOfset(int val)
{
	player.setPlayingOffset(sf::seconds(val));
}

/// <returns>Total song lenght in seconsds.</returns>
int MusicOperator::getToalDuration()
{
	return (int) player.getDuration().asSeconds();
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
		songChanged = true;
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

std::string MusicOperator::getUpdatedPath()
{
	songChanged = false;
	return currentPath;
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

bool MusicOperator::getSongChanged() {
	return songChanged;
}

void MusicOperator::addToRecentPlays(std::string* path)
{
	recentPlays.push_back(*path);
	recentPos = (int)recentPlays.size() - 1;
}

std::vector<std::string>* MusicOperator::getRecentPlays()
{
	return &recentPlays;
}
