#include "Microphone.h"
#include <iostream>

Microphone::Microphone()
{
	IsMuted = false;
}

bool Microphone::GetIsMuted()
{
	return IsMuted;
}

void Microphone::TurnIsMuted()
{
	IsMuted = !IsMuted;
}
