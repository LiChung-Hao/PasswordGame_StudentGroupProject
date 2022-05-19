#include "Controller.h"
#include <string>
#include <iostream>
#include "Windows.h"
#include "xinput.h"

using namespace std;

Controller::Controller()
{
	ControllerConnected = false;

}


Controller::~Controller()
{
}


void Controller::Update()
{
	Sleep(20);

	system("cls");

	// b) Clear out the controller states memory using ZeroMemory and the controller state object instance inside of this Controller Class.
	ZeroMemory(&controllerState, sizeof(XINPUT_STATE));
	// c) Get the new state of the memory from the controller using the Xinput library API
	//XINPUT_STATE controllerState;
	// d) When the controller is detected, display a message that says the controller is connected.
	if (XInputGetState(0, &controllerState) == ERROR_SUCCESS)
	{
		printf("Controller is plugged in now!\n");
	}

	if (IsAPressed())
	{
		//originally plan to use it as a tab buttom to move to next text box
		//INPUT input = { 0 };
		//input.type = INPUT_KEYBOARD;
		//input.ki.wVk = VkKeyScanA('\t');
		//SendInput(1, &input, sizeof(input));
		//ZeroMemory(&input, sizeof(input));
		//input.ki.dwFlags = KEYEVENTF_KEYUP;
		//SendInput(1, &input, sizeof(input));

		// a compromised way to use controller in this project
		isApressed = true;
	}

}