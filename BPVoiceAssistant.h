#pragma once
#include "ButtonPressed.h"
#include "VoiceAssistentNN.h"

class BPVoiceAssistant : public ButtonPressed
{
public:
	BPVoiceAssistant(VoiceAssistentNN* voiceassistent);
	virtual void Press() override;
private:
	VoiceAssistentNN* voiceassistent;
};

