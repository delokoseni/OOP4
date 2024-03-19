#include "Microphone.h"
#include <iostream>

Microphone::Microphone()
{
	IsMuted = false;
	Record = "";
}

bool Microphone::GetIsMuted()
{
	return IsMuted;
}

void Microphone::TurnIsMuted()
{
	IsMuted = !IsMuted;
}
