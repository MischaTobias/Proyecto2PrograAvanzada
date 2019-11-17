#pragma once
#include "Recordatorio.h"
class Alarma :	public Recordatorio
{//Clase heredada de la clase Recordatorio
public:
	//Declaración de diferentes constructores
	Alarma(std::string date, std::string shour, std::string desc, std::string id, std::string p, int pnum);
	Alarma();
};

