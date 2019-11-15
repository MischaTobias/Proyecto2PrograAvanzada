#pragma once
#include "Evento.h"
class Actividad :	public Evento
{
public:
	Actividad();
	Actividad(std::string date, int hstart, int mstart, int hend, int mend, std::string mplace, std::string ipeople,
		std::string nmaterials, std::string desc, std::string id, int priority);
	TimeSpan* endHour;
	std::string meetingPlace;
	std::string involvedPeople;
	std::string neededMaterials;
	void ItsTime();
};

