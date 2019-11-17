#pragma once
#include <string>
#include "Actividad.h"
#include "Recordatorio.h"
#include "Alarma.h"
using namespace System;
class NodoEvento
{
public:
	//Creaci�n de diferentes constructores polimorfos para adaptar la creaci�n de nodos a los diferentes tipos de evento manejado.
	NodoEvento(Actividad* act);
	NodoEvento(Recordatorio* rec);
	NodoEvento(Alarma* alarm);
	NodoEvento();
	NodoEvento* siguienteNodo;
	Actividad* actividad;
	Recordatorio* recordatorio;
	Alarma* alarma;
	int Priority();
	//Declaraci�n de variables y m�todo Priority() que devuelve la prioridad del evento guardado en este nodo.
};