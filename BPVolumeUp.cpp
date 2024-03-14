#include "BPVolumeUp.h"
#include <iostream>

BPVolumeUp::BPVolumeUp(Speaker* speaker)
{
	this->speaker = speaker;
}

void BPVolumeUp::Press()
{
	if (speaker->GetVolume() < speaker->GetMaxVolume())
	{
		speaker->SetVolume(speaker->GetVolume() + 5);
		std::cout << "Volume increased!" << std::endl;
	}
	else
		std::cout << "The volume is already at maximum!" << std::endl;
}