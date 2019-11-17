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
	NodoEvento* n1 = new NodoEvento();
	NodoEvento* n2 = new NodoEvento();
	NodoEvento* nAux = new NodoEvento();
	n1 = first;

	for (int i = 0; i < nElementos - 1; i++)
	{
		for (int j = i + 1; j < nElementos; j++)
		{
			n1 = ObtenerDePos(i);
			n2 = ObtenerDePos(j);
			if (n1->Priority() > n2->Priority())
			{
				nAux = n2;
				n2 = n1;
				n1 = nAux;
			}
		}
	}
}

NodoEvento* ListaEventos::ObtenerDePos(int pos) {
	if (pos == 0)
	{
		return first;
	}
	else
	{
		NodoEvento* aux = first;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->siguienteNodo;
		}
		return aux;
	}
}