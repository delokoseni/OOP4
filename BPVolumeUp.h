#pragma once
#include "ButtonPressed.h"
#include "Speaker.h"

class BPVolumeUp : public ButtonPressed
{
	virtual void Press() override;
public:
	Speaker* speaker;
	BPVolumeUp(Speaker* speaker);
};

