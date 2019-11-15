#include "NodoEvento.h"
NodoEvento::NodoEvento(Actividad* act) {
	actividad = act;
	recordatorio = new Recordatorio();
	alarma = new Alarma();
	siguienteNodo = nullptr;
}

NodoEvento::NodoEvento(Recordatorio* rec) {
	actividad = new Actividad();
	recordatorio = rec;
	alarma = new Alarma();
	siguienteNodo = nullptr;
}

NodoEvento::NodoEvento(Alarma* alarm) {
	actividad = new Actividad();
	recordatorio = new Recordatorio();
	alarma = alarm;
	siguienteNodo = nullptr;
}

NodoEvento::NodoEvento() {

}

int NodoEvento::Priority() {
	if (actividad->priority != -1)
	{
		return actividad->priority;
	}
	else if (recordatorio->priority != -1)
	{
		return recordatorio->priority;
	}
	else
	{
		return alarma->priority;
	}
}