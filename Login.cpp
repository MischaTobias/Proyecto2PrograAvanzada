#include "Login.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int login(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2PrograAvanzada::Login form;
	Application::Run(% form);
	return 0;
}
