#pragma once
#include "Recordatorio.h"
class Alarma :	public Recordatorio
{
public:
	Alarma(std::string date, int shour, int smin, std::string desc, std::string id, int p);
	Alarma();
	void ItsTime();
};

