#include "Actividad.h"

Actividad::Actividad() {
	priority = "N";
	pnum = -1;
}

Actividad::Actividad(std::string date, std::string shour, std::string ehour, std::string mplace, std::string ipeople,
	std::string nmaterials, std::string desc, std::string id, std::string priority, int pnum) {
	fecha = date;
	startHour = shour;
	endHour = ehour;
	meetingPlace = mplace;
	involvedPeople = ipeople;
	neededMaterials = nmaterials;
	description = desc;
	identifier = id;
	this->priority = priority;
	this->pnum = pnum;
}

void Actividad::ItsTime() {

}