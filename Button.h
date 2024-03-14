#pragma once
#include "ButtonPressed.h"

class Button
{
public:
	Button(ButtonPressed* buttonpressed);
	void Press();
private:
	ButtonPressed* Action;
};

