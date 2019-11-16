#pragma once
#include "Evento.h"
class Actividad :	public Evento
{
public:
	Actividad();
	Actividad(std::string date, std::string shour, std::string ehour, std::string mplace, std::string ipeople,
		std::string nmaterials, std::string desc, std::string id, std::string priority, int pnum);
	std::string endHour;
	std::string meetingPlace;
	std::string involvedPeople;
	std::string neededMaterials;
	void ItsTime();
};

