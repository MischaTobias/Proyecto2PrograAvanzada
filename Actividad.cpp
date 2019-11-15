#include "Actividad.h"

Actividad::Actividad() {
	priority = -1;
}

Actividad::Actividad(std::string date, int hstart, int mstart, int hend, int mend, std::string mplace, std::string ipeople,
	std::string nmaterials, std::string desc, std::string id, int priority) {
	fecha = date;
	startHour = new TimeSpan(hstart, mstart, 0);
	endHour = new TimeSpan(hend, mend, 0);
	meetingPlace = "";
	involvedPeople = "";
	neededMaterials = "";
	description = "";
	identifier = "";
	priority = 0;
}

void Actividad::ItsTime() {

}