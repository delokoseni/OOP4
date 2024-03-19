#include "ContentProxy.h"

ContentProxy::ContentProxy(std::string AudioContent, std::string ShortDescription, bool AvailableForChildren)
{
	this->content = new Content(AudioContent, ShortDescription, AvailableForChildren);
}

void ContentProxy::GetContent()
{
	content->GetContent();
}

void ContentProxy::GetAdultContent()
{
	std::cout << "Adult content not available!" << std::endl;
}