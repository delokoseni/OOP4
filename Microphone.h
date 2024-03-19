#pragma once
#include <iostream>

class Microphone
{
public:
	Microphone();
	bool GetIsMuted();
	void TurnIsMuted();
private:
	bool IsMuted;
	std::string Record;
};

