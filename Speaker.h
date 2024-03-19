#pragma once
#include "Content.h"

class Speaker
{
public:
	Speaker();
	void SetVolume(int Volume);
	int GetVolume();
	int GetMaxVolume();
	int GetMinVolume();
private:
	int Volume;
	int MaxVolume;
	int MinVolume;
};


