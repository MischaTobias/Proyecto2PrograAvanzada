#pragma once
#include <string>
using namespace System;
class Evento
{
	//Creación de clase diseñada para herencia.
public:
	//Declaración de variables que poseen todos los tipos de eventos; no existe un constructor ya que no se instanciará en ningún momento la clase.
	std::string startHour;
	std::string fecha;
	std::string description;
	std::string identifier;
	std::string priority;
	int pnum;
};

