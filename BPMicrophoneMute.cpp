#include "BPMicrophoneMute.h"
#include <iostream>

BPMicrophoneMute::BPMicrophoneMute(Microphone* microphone)
{
	this->microphone = microphone;
}

void BPMicrophoneMute::Press()
{
	if (microphone->GetIsMuted())
	{
		microphone->TurnIsMuted();
		std::cout << "Microphone is unmuted!" << std::endl;
	}
	else
	{
		microphone->TurnIsMuted();
		std::cout << "Microphone is muted!" << std::endl;
	}
};
