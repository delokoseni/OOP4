#include "Content.h"
#include <iostream>

Content::Content(std::string AudioContent, std::string ShortDescription, bool AvailableForChildren)
{
	this->AudioContent = AudioContent;
	this->ShortDescription = ShortDescription;
	this->AvailableForChildren = AvailableForChildren;
}

bool Content::GetAvailableForChildren()
{
	return AvailableForChildren;
}

void Content::GetContent()
{
	std::cout << AudioContent << std::endl;
}

void Content::GetAdultContent()
{
	std::cout << AudioContent << std::endl;
}
