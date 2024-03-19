#pragma once
#include "SendRequest.h"
#include <iostream>

class Request
{
public:
	Request(bool IsChild, int PersonID, std::string Record, SendRequest* Destenition);
	bool GetIsChild();
	void Send();
private:
	bool IsChild;
	int PersonID;
	std::string Record;
	SendRequest* Destenition;
};
