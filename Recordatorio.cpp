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

Recordatorio::Recordatorio() {
	priority = "N";
	pnum = -1;
}

void Recordatorio::ItsTime() {

}