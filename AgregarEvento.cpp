#include "AgregarEvento.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int agregarevento(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2PrograAvanzada::AgregarEvento form;
	Application::Run(% form);
	return 0;
}
