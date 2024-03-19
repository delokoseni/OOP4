#pragma once
#include "ContentFilter.h"

class Content : public ContentFilter
{
public:
	Content(std::string AudioContent, std::string ShortDescription, bool AvailableForChildren);
	virtual void GetContent() override;
	virtual void GetAdultContent() override;
	bool GetAvailableForChildren();
private:
	std::string AudioContent;
	std::string ShortDescription;
	bool AvailableForChildren;
};