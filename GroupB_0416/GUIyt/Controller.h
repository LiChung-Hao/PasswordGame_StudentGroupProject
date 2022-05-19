#define  WIN32_LEAN_AND_MEAN 1

#include "windows.h"
#include "xinput.h"

#pragma once

class Controller
{
	const float MAX_TRIGGER_VALUE = 255.0f;

public:
	Controller();
	~Controller();

	void Update();
	bool isApressed = false;
	// Button A:
	bool IsAPressed() { return (controllerState.Gamepad.wButtons & XINPUT_GAMEPAD_A); }



private:

	XINPUT_STATE controllerState;
	bool ControllerConnected;
};

