#include "MyForm.h"
#include "Controller.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main()
{
	//study material: https://youtu.be/LF1cI7zeFm4
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    GUIyt::MyForm form;
    Application::Run(% form);
	
	Controller* xboxController = new Controller();
	XINPUT_STATE controllerState;
	bool running = true;
}

