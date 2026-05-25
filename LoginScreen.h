#pragma once
#include "TerminalScreen.h"
#include <string>

using namespace std;
    
class LoginScreen : public TerminalScreen {
private:
    int loginState;
    string userBuffer;
    string passBuffer;
    string challengeBuffer;
    int failedAttempts;

    int synChallenge;
    int expectedAck;
    float lockoutTimer;

public:
    void setup() override;
    void runFrame(float dt, int& activeScreen) override;
    void draw(Font font) override;
};