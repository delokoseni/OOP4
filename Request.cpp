#include "Request.h"

Request::Request(bool isChild, int personID, std::string record, SendRequest* destenition)
{
	this->isChild = isChild;
	this->personID = personID;
	this->record = record;
	this->destenition = destenition;
}

bool Request::GetIsChild()
{
	return isChild;
}

void Request::Send()
{
	destenition->Send();
}
