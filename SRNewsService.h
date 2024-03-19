#pragma once
#include "SendRequest.h"
class SRNewsService : public SendRequest
{
public:
	virtual void Send() override;
};

