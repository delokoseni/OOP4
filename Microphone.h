#pragma once
#include "Request.h"

class Microphone
{
public:
	Microphone();
	void GetRequest();
	void SendRequest();
	bool GetIsMuted();
	void TurnIsMuted();
private:
	bool IsMuted;
	Request request;
};

