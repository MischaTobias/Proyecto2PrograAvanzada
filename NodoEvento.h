#pragma once
#include <string>
#include "Actividad.h"
#include "Recordatorio.h"
#include "Alarma.h"
using namespace System;
class NodoEvento
{
public:
	//Creación de diferentes constructores polimorfos para adaptar la creación de nodos a los diferentes tipos de evento manejado.
	NodoEvento(Actividad* act);
	NodoEvento(Recordatorio* rec);
	NodoEvento(Alarma* alarm);
	NodoEvento();
	NodoEvento* siguienteNodo;
	Actividad* actividad;
	Recordatorio* recordatorio;
	Alarma* alarma;
	int Priority();
	//Declaración de variables y método Priority() que devuelve la prioridad del evento guardado en este nodo.
};