#include "Alarma.h"
Alarma::Alarma(std::string date, std::string shour, std::string desc, std::string id, std::string p, int pnum) {
	fecha = date;
	startHour = shour;
	description = desc;
	identifier = id;
	priority = p;
	this->pnum = pnum;
}

Alarma::Alarma() {
	priority = "N";
	pnum = -1;
}

void Alarma::ItsTime() {

}