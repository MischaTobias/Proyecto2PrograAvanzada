#pragma once
#include "NodoEvento.h"
class ListaEventos
{
	//Creación lista eventos, constructores y diferentes variables y constructores.
public:
	ListaEventos();
	NodoEvento* first;
	int nElementos;
public:
	void Insertar(NodoEvento* evento);//Procedimiento para insertar un NodoEvento
	void Sort();//Bubble sort para ordenar por prioridad
	NodoEvento* ObtenerDePos(int pos); //Procedimiento auxiliar para Sort(), devuelve un nodoEvento en la posición del parámetro recibido.
	NodoEvento* Quitar();//Devuelve el first y el nuevo first es el siguiente del nodo first.
};

