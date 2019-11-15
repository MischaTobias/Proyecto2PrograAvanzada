#pragma once
#include "Evento.h"
class Recordatorio : public Evento
{
public:
	Recordatorio(std::string date, int shour, int smin, std::string desc,
		std::string id, int p);
	Recordatorio();
	void ItsTime();
};

