#pragma once
#include <string>
using namespace System;
class Evento
{
	//Creaci�n de clase dise�ada para herencia.
public:
	//Declaraci�n de variables que poseen todos los tipos de eventos; no existe un constructor ya que no se instanciar� en ning�n momento la clase.
	std::string startHour;
	std::string fecha;
	std::string description;
	std::string identifier;
	std::string priority;
	int pnum;
};

