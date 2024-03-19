#include "BPVoiceAssistant.h"
#include <iostream>

BPVoiceAssistant::BPVoiceAssistant(VoiceAssistentNN* voiceassistent)
{
	this->voiceassistent = voiceassistent;
}

void BPVoiceAssistant::Press()
{
	std::cout << "Assistent stopped!" << std::endl;
};
