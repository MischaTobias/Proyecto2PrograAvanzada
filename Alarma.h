#pragma once
#include "Recordatorio.h"
class Alarma :	public Recordatorio
{
public:
	Alarma(std::string date, std::string shour, std::string desc, std::string id, std::string p, int pnum);
	Alarma();
	void ItsTime();
};

