#pragma once
#include "SendRequest.h"

class SRSearchService : public SendRequest
{
public:
	virtual void Send() override;
};

