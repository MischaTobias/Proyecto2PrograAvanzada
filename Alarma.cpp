#include "Alarma.h"
Alarma::Alarma(std::string date, std::string shour, std::string desc, std::string id, int p) {
	fecha = date;
	startHour = shour;
	description = desc;
	identifier = id;
	priority = p;
}

Alarma::Alarma() {
	priority = -1;
}

void Alarma::ItsTime() {

}