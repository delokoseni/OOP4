#pragma once
#include "ButtonPressed.h"
#include "Microphone.h"

class BPMicrophoneMute : public ButtonPressed
{
public:
	virtual void Press() override;
	BPMicrophoneMute(Microphone* microphone);
private:
	Microphone* microphone;
};

