#include "Recordatorio.h"
Recordatorio::Recordatorio(std::string date, std::string shour, std::string desc,
	std::string id, int p) {
	fecha = date;
	startHour = shour;
	description = desc;
	identifier = id;
	priority = p;
}

Recordatorio::Recordatorio() {
	priority = -1;
}

void Recordatorio::ItsTime() {

}