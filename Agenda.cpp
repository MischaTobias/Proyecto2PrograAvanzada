#include "Agenda.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int agenda(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2PrograAvanzada::Agenda form;
	Application::Run(% form);
	return 0;
}

