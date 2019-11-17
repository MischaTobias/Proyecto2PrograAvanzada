#include "MessageAlarma.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int messagealarma(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2PrograAvanzada::MessageAlarma form;
	Application::Run(% form);
	return 0;
}

