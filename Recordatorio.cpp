#include "Recordatorio.h"
Recordatorio::Recordatorio(std::string date, std::string shour, std::string desc,
	std::string id, std::string p, int pnum) {
	fecha = date;
	startHour = shour;
	description = desc;
	identifier = id;
	priority = p;
	this->pnum = pnum;
}
//Constructor que asigna valor a las diferentes variables locales y heredadas.

Recordatorio::Recordatorio() {
	priority = "N";
	pnum = -1;
}
//Constructor que asigna este recordatorio como "vacío"