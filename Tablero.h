#include "Objeto.h"
#include "Hueco.h"
#include "Pieza.h"
#include "Jugador.h"
#define FILAMAX 8 //esta linea y la siguiente son las dimensiones del tablero "oficial"
#define COLUMNAMAX 8
#pragma once

class Tablero 
{
	static int const fMAX = FILAMAX;
	static int const cMAX = COLUMNAMAX;
	Objeto * tablero[fMAX][cMAX];
public:
	bool insertar(Objeto*, Posicion); // Sobrecarga de insertar
	bool insertar(Hueco); //Sobrecarga de insertar
	Tablero(void);
	Tablero(int fmax, int cmax) {
		for (int f = 0; f<fmax; f++)
		{
			for (int c = 0; c<cmax; c++)
			{
				tablero[f][c] = new Hueco(Posicion(f, c)); //Inicializamos todos los espacios del tablero con huecos
			}
		}

	};
	~Tablero(void);
	int cuentaPiezas(Equipo);
	void setPieza(Objeto* obj) {   //esto probablemente haya que cambiarlo
		if (obj->getEquipo() == A || obj->getEquipo() == B) tablero[obj->getPosicion().fila][obj->getPosicion().columna] = new Pieza(Posicion(obj->getPosicion().fila, obj->getPosicion().columna), obj->getEquipo());
		if (obj->getEquipo() == N) tablero[obj->getPosicion().fila][obj->getPosicion().columna] = new Hueco(Posicion(obj->getPosicion().fila, obj->getPosicion().columna));
	}
	Objeto* getPieza(Posicion p) { return tablero[p.fila][p.columna]; };
	friend class Interaccion; //para que esas clases puedan acceder a los parametros debidos
	friend class IA;
};