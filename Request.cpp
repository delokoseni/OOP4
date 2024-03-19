#include "Request.h"

Request::Request(bool IsChild, int PersonID, std::string Record, SendRequest* Destenition)
{
	this->IsChild = IsChild;
	this->PersonID = PersonID;
	this->Record = Record;
	this->Destenition = Destenition;
}

bool Request::GetIsChild()
{
	return IsChild;
}

void Request::Send()
{
	Destenition->Send();
}
