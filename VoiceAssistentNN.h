#pragma once
#include "NeuralNetwork.h"
#include <iostream>

class VoiceAssistentNN : public NeuralNetwork
{
public:
	VoiceAssistentNN();
private:
	bool IsSpeaking;
};

