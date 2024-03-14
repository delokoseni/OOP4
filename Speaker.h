#pragma once
#include "Content.h"

class Speaker
{
public:
	Speaker();
	void SetVolume(int volume);
	int GetVolume();
	int GetMaxVolume();
	int GetMinVolume();
	void PlayContent(Content content);
	void StopPlayingContent();
private:
	int volume;
	int maxvolume;
	int minvolume;
};


