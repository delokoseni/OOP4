#include "Speaker.h"

Speaker::Speaker()
{
	volume = 50;
	maxvolume = 100;
	minvolume = 0;
}

void Speaker::SetVolume(int volume)
{
	this->volume = volume;
}

int Speaker::GetVolume()
{
	return volume;
}


int Speaker::GetMaxVolume()
{
	return maxvolume;
}

int Speaker::GetMinVolume()
{
	return minvolume;
}

void Speaker::PlayContent(Content content)
{

}

void Speaker::StopPlayingContent()
{

}

