//el hueco, igual que la pieza, es un tipo de objeto
#include "Objeto.h"
#pragma once
class Hueco :public Objeto
{
	const Equipo equipo;
public:
	Hueco(Posicion p) :Objeto(p), equipo(N) {};
	virtual Equipo getEquipo() { return equipo; };
	virtual	void setEquipo(Equipo e) {};
};

