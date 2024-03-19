#pragma once
#include "ButtonPressed.h"
#include "Speaker.h"

class BPVolumeDown : public ButtonPressed
{
public:
	virtual void Press() override;
	BPVolumeDown(Speaker* speaker);
private:
	Speaker* speaker;
};

