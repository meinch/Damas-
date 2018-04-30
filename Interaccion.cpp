#include "Interaccion.h"



Interaccion::Interaccion(void)
{
}


Interaccion::~Interaccion()
{
}

bool Interaccion::mover(Posicion posicion, Objeto *pieza, Tablero &tablero)
{
	if (tablero.insertar(pieza, posicion)) // Se manda la pieza que quieres insertar y la posicion, devolviendo si es posible
		return true;
	else
		return false;
}

bool Interaccion::capturar(Posicion posicion, Objeto *pieza, Tablero &tablero)
{

}