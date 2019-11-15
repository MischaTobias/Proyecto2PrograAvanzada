#pragma once
#include <string>
#include "Actividad.h"
#include "Recordatorio.h"
#include "Alarma.h"
using namespace System;
class NodoEvento
{
public:
	NodoEvento(Actividad* act);
	NodoEvento(Recordatorio* rec);
	NodoEvento(Alarma* alarm);
	NodoEvento();
	NodoEvento* siguienteNodo;
	Actividad* actividad;
	Recordatorio* recordatorio;
	Alarma* alarma;
	int Priority();
};