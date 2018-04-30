#pragma once
#include "Hueco.h"
#include "Objeto.h"
#include "Pieza.h"
#include "Jugador.h"
#include "Tablero.h"


class Interaccion
{
public:
	Interaccion(void);
	~Interaccion(void);
	static bool mover(Posicion, Objeto*, Tablero &); //movimiento de la ficha
	static bool capturar(Posicion, Objeto*, Tablero &); //captura de ficha contraria

};

