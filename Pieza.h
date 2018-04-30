//pieza debe ser un tipo de objeto
#include "Objeto.h"
#pragma once


class Pieza : public Objeto
{
	Equipo equipo;
public:
	Pieza(Posicion p, Equipo e) :Objeto(p), equipo(e) {};
	virtual Equipo getEquipo() { return equipo; };
	void setEquipo(Equipo e) { equipo = e; };
};


