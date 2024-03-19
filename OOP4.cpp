#include <iostream>
#include "Speaker.h"
#include "Button.h"
#include "BPVolumeUp.h"
#include "BPVolumeDown.h"
#include "BPMicrophoneMute.h"
#include "BPVoiceAssistant.h"
#include "SendRequest.h"
#include "SRMobileApp.h"
#include "SRNewsService.h"
#include "SRSearchService.h"
#include "Request.h"
#include "Content.h"
#include "ContentProxy.h"

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

    SRMobileApp* destenition = new SRMobileApp();
    Request request(false, 1, "Turn on some music", destenition);
    request.Send();

    SRSearchService* destenition1 = new SRSearchService();
    Request request1(false, 1, "Where is Mexico?", destenition1);
    request1.Send();

    SRNewsService* destenition2 = new SRNewsService();
    Request request2(false, 1, "What`s new?", destenition2);
    request2.Send();

    ContentFilter* CF1 = new Content("Some content\n", "Rock music.", false);
    ContentFilter* CF2 = new ContentProxy("Some content\n", "Rock music.", false);
    CF1->GetContent();
    CF1->GetAdultContent();
    CF2->GetContent();
    CF2->GetAdultContent();

    return 0;
}
