#pragma once
#include "Request.h"

class ContentFilter
{
public:
	virtual void GetContent() = 0;
	virtual void GetAdultContent() = 0;
};

