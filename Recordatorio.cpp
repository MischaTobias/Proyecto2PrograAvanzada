#include "Recordatorio.h"
Recordatorio::Recordatorio(std::string date, int shour, int smin, std::string desc,
	std::string id, int p) {
	fecha = date;
	startHour = new TimeSpan(shour, smin, 0);
	description = desc;
	identifier = id;
	priority = p;
}

Recordatorio::Recordatorio() {
	priority = -1;
}

void Recordatorio::ItsTime() {

}