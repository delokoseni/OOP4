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

    BPVolumeDown* volumedownAction = new BPVolumeDown();
    Button volumedownButton(volumedownAction);
    volumedownButton.Press();

    std::cout << "Speaker volume: " << speaker.GetVolume() << std::endl;

    BPMicrophoneMute* micromuteAction = new BPMicrophoneMute();
    Button micromuteButton(micromuteAction);
    micromuteButton.Press();

    BPVoiceAssistant* assiststopAction = new BPVoiceAssistant();
    Button assiststopButton(assiststopAction);
    assiststopButton.Press();
    return 0;
}
