#include "Speaker.h"

Speaker::Speaker()
{
	Volume = 50;
	MaxVolume = 100;
	MinVolume = 0;
}

void Speaker::SetVolume(int Volume)
{
	this->Volume = Volume;
}

int Speaker::GetVolume()
{
	return Volume;
}

int Speaker::GetMaxVolume()
{
	return MaxVolume;
}

int Speaker::GetMinVolume()
{
	return MinVolume;
}


