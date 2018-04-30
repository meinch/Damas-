#include "Posicion.h"
#pragma once
enum Equipo { B=1,A, N };
class Objeto //Clase VIRTUAL PURA
{
protected:
	Posicion posicion;
public:
	Objeto(Posicion p) :posicion(p) {};
	virtual Equipo getEquipo() = 0; //Equipo es un enum	
	virtual	void setEquipo(Equipo e) = 0;
	Posicion getPosicion() { return posicion; };
};

