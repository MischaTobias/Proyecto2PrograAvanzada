#include "Alarma.h"
Alarma::Alarma(std::string date, std::string shour, std::string desc, std::string id, std::string p, int pnum) {
	fecha = date;
	startHour = shour;
	description = desc;
	identifier = id;
	priority = p;
	this->pnum = pnum;
}
//Constructor que asigna las diferentes variables heredadas con base en los par�metros recibidos.

Alarma::Alarma() {
	priority = "N";
	pnum = -1;
}
//Constructor que inicializa las variables se�alando que el objeto est� "vac�o"