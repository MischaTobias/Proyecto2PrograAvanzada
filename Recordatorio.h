#pragma once
#include "Evento.h"
class Recordatorio : public Evento
{
public:
	//Declaración de constructores polimorfos
	Recordatorio(std::string date, std::string shour, std::string desc, std::string id, std::string p, int pnum);
	Recordatorio();
};

