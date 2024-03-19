#pragma once
#include "SendRequest.h"
#include <iostream>

class Request
{
public:
	Request(bool isChild, int personID, std::string record, SendRequest* destenition);
	bool GetIsChild();
	void Send();
private:
	bool isChild;
	int personID;
	std::string record;
	SendRequest* destenition;
};
