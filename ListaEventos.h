#pragma once
#include "NodoEvento.h"
class ListaEventos
{
public:
	ListaEventos();
	NodoEvento* first;
	int nElementos;
public:
	void Insertar(NodoEvento* evento);
	void Sort();
	bool IsSorted();
	NodoEvento* Quitar();
};

