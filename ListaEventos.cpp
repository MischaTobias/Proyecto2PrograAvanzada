#include "ListaEventos.h"
ListaEventos::ListaEventos() {
	first = nullptr;
	nElementos = 0;
}

void ListaEventos::Insertar(NodoEvento* evento) {
	if (first == nullptr)
	{
		first = evento;
		nElementos++;
	}
	else
	{
		evento->siguienteNodo = first;
		first = evento;
		nElementos++;
	}
}

NodoEvento* ListaEventos::Quitar() {
	NodoEvento* nodo = new NodoEvento();
	if (first == nullptr)
	{
		return nodo;
	}
	else
	{
		nodo = first;
		first = first->siguienteNodo;
		nElementos--;
		return nodo;
	}
}

void ListaEventos::Sort() {
	NodoEvento* mayor = new NodoEvento();
	NodoEvento* nAux = new NodoEvento();
	mayor = first;
	while (!IsSorted())
	{
		for (int i = 0; i < nElementos - 1; i++)
		{
			if (mayor->Priority() > mayor->siguienteNodo->Priority())
			{
				nAux = mayor;
				mayor = mayor->siguienteNodo;
				mayor->siguienteNodo = nAux;
			}
		}
	}
}

bool ListaEventos::IsSorted() {
	NodoEvento* nAux = first;
	for (int i = 0; i < nElementos - 1; i++)
	{
		if (first->Priority() > first->siguienteNodo->Priority())
		{
			return false;
		}
	}
	return true;
}