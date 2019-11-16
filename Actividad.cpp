#include "Actividad.h"

Actividad::Actividad() {
	priority = -1;
}

Actividad::Actividad(std::string date, std::string shour, std::string ehour, std::string mplace, std::string ipeople,
	std::string nmaterials, std::string desc, std::string id, int priority) {
	fecha = date;
	startHour = shour;
	endHour = ehour;
	meetingPlace = mplace;
	involvedPeople = ipeople;
	neededMaterials = nmaterials;
	description = desc;
	identifier = id;
	this->priority = priority;
}

void Actividad::ItsTime() {

}