#include "Registro.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int registro(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2PrograAvanzada::Registro form;
	Application::Run(% form);
	return 0;
}

