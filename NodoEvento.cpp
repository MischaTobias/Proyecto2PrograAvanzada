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
//Constructores polimorfos, asignación de variables con base a un diferente elemento enviado como parámetro.

int NodoEvento::Priority() {
	if (actividad->pnum != -1)
	{
		return actividad->pnum;
	}
	else if (recordatorio->pnum != -1)
	{
		return recordatorio->pnum;
	}
	else
	{
		return alarma->pnum;
	}
}
//Devuelve la prioridad del evento guardado en este nodo.