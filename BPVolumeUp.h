#pragma once
#include "ButtonPressed.h"
#include "Speaker.h"

class BPVolumeUp : public ButtonPressed
{
public:
	virtual void Press() override;
	BPVolumeUp(Speaker* speaker);
private:
	Speaker* speaker;
};

