#pragma once
#include "ButtonPressed.h"
#include "VoiceAssistentNN.h"

class BPVoiceAssistant : public ButtonPressed
{
public:
	virtual void Press() override;
	BPVoiceAssistant(VoiceAssistentNN* voiceassistent);
private:
	VoiceAssistentNN* voiceassistent;
};

