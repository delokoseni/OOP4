#include "BPVolumeDown.h"
#include <iostream>

BPVolumeDown::BPVolumeDown(Speaker* speaker)
{
	this->speaker = speaker;
}

void BPVolumeDown::Press()
{
	if (speaker->GetVolume() > speaker->GetMinVolume())
	{
		speaker->SetVolume(speaker->GetVolume() - 5);
		std::cout << "Volume decreased!" << std::endl;
	}
	else
		std::cout << "The volume is already at minimum!" << std::endl;
}
