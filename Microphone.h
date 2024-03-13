#pragma once
#include "Request.h"

class Microphone
{
public:
	void GetRequest();
	void SendRequest();
private:
	Request request;
};

