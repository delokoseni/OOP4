#pragma once
#include "ContentFilter.h"
#include "Request.h"
#include "Content.h"

class ContentProxy : public ContentFilter
{
public:
	ContentProxy(std::string AudioContent, std::string ShortDescription, bool AvailableForChildren);
	virtual void GetContent() override;
	virtual void GetAdultContent() override;
private:
	Content* content;
};

