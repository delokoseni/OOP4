#include "Button.h"

Button::Button(ButtonPressed *buttonpressed)
{
	Action = buttonpressed;
}

void Button::Press()
{
	Action->Press();
}
