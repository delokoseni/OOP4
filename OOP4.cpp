#include <iostream>
#include "Speaker.h"
#include "Button.h"
#include "BPVolumeUp.h"
#include "BPVolumeDown.h"
#include "BPMicrophoneMute.h"
#include "BPVoiceAssistant.h"

using namespace std;

int main()
{
    Speaker speaker;
    std::cout << "Speaker volume: " << speaker.GetVolume() << std::endl;

    BPVolumeUp *volumeupAction = new BPVolumeUp(&speaker);
    Button volumeupButton(volumeupAction);
    volumeupButton.Press();

    std::cout << "Speaker volume: " << speaker.GetVolume() << std::endl;

    BPVolumeDown* volumedownAction = new BPVolumeDown(&speaker);
    Button volumedownButton(volumedownAction);
    volumedownButton.Press();

    std::cout << "Speaker volume: " << speaker.GetVolume() << std::endl;

    Microphone microphone;

    BPMicrophoneMute* micromuteAction = new BPMicrophoneMute(&microphone);
    Button micromuteButton(micromuteAction);
    micromuteButton.Press();
    micromuteButton.Press();

    VoiceAssistentNN voiceassistant;

    BPVoiceAssistant* assiststopAction = new BPVoiceAssistant(&voiceassistant);
    Button assiststopButton(assiststopAction);
    assiststopButton.Press();
    return 0;
}
