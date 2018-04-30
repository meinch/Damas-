#include"Tablero.h"

Tablero::Tablero(void)//borramos lo que pudiese haber en el tablero e inicializamos las piezas
{
	for (int f = 0; f < fMAX; f++)
	{
		for (int c = 0; c < cMAX; c++)
		{
			tablero[f][c] = new Hueco(Posicion(f, c)); //Inicializamos todos los espacios del tablero con huecos
		}
	}

	//NEGRAS
	for (int f = 1; f < 3; f = f + 2)      //relleno las negras en la parte superior del tablero 
	{
		for (int c = 1; c <= cMAX; c = c + 2)       	
		{
			tablero[f][c] = new Pieza(Posicion(f, c), N);
		}
	}
	for (int f = 0; f <= 3; f = f + 2)      //FILAS 0 Y 2
	{
		for (int c = 0; c < cMAX; c = c + 2)       	
		{
			tablero[f][c] = new Pieza(Posicion(f, c), N);
		}
	}

	//BLANCAS
	for (int f = fMAX - 2; f <= fMAX; f = f + 2)   // CREO LAS BLANCAS EN LA PARTE INFERIOR DEL TABLERO
	{
		for (int c = 1; c <= cMAX; c = c + 2)
		{
			tablero[f][c] = new Pieza(Posicion(f, c), B);
		}
	}
	for (int f = fMAX-1; f < fMAX; f = f + 2)      //FILAS 0 Y 2
	{
		for (int c = 0; c < cMAX; c = c + 2)
		{
			tablero[f][c] = new Pieza(Posicion(f, c), B);
		}
	}

}
Tablero::~Tablero(void)
{
	for (int f = 0; f<fMAX; f++)
	{
		for (int c = 0; c<fMAX; c++)
		{
			delete tablero[f][c]; //Eliminamos de la reserva de memoria todos los objetos
		}
	}
}
bool Tablero::insertar(Objeto* pieza, Posicion posicion)//insertar sirve para el movimiento, aunque falta por definir las condiciones del mismo
{
	if ((posicion.columna < cMAX) && (posicion.fila < fMAX)) //Esta dentro de los limites del tablero
		if ((tablero[posicion.fila][posicion.columna]->getEquipo() == A)) //Hay un hueco en el lugar de la inserción // quesiignifica A?
		{
			delete tablero[posicion.fila][posicion.columna]; //Borramos la pieza anterior
			Pieza piezaNueva(posicion, pieza->getEquipo());
			tablero[posicion.fila][posicion.columna] = new Pieza(piezaNueva); //Insertamos la nueva pieza
			return true;
		}
	return false;
}
bool Tablero::insertar(Hueco h)
{
	if ((h.getPosicion().columna < cMAX) && (h.getPosicion().fila < fMAX)) //Esta dentro de los limites del tablero
	{
		delete tablero[h.getPosicion().fila][h.getPosicion().columna]; //Borramos la pieza anterior
		tablero[h.getPosicion().fila][h.getPosicion().columna] = new Hueco(h); //Insertamos el nuevo hueco
		return true;
	}
	return false;
}
int Tablero::cuentaPiezas(Equipo e)//introduces el equipo y te dice cuantas piezas hay. Sirve para valorar el fin del juego
{
	int numpiezas = 0;
	for (int f = 0; f<fMAX; f++)
	{
		for (int c = 0; c<cMAX; c++)
		{
			if (tablero[f][c]->getEquipo() == e)
				numpiezas++;
		}
	}
	return numpiezas;
}