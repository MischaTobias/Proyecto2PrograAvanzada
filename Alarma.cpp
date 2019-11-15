#include "Alarma.h"
Alarma::Alarma(std::string date, int shour, int smin, std::string desc, std::string id, int p) {
	fecha = date;
	startHour = new TimeSpan(shour, smin, 0);
	description = desc;
	identifier = id;
	priority = p;
}

Alarma::Alarma() {
	priority = -1;
}

void Alarma::ItsTime() {

}