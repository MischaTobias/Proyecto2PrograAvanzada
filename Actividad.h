#pragma once
#include "Evento.h"
class Actividad :	public Evento
{
	//Clase heredada de clase Evento
public:
	//Declaración de constructores polimorfos y variables.
	Actividad();
	Actividad(std::string date, std::string shour, std::string ehour, std::string mplace, std::string ipeople,
		std::string nmaterials, std::string desc, std::string id, std::string priority, int pnum);
	std::string endHour;
	std::string meetingPlace;
	std::string involvedPeople;
	std::string neededMaterials;
};

