#include "Objeto.h" //Se incluye para la tenencia del enum equipo
#pragma once
class Jugador
{
	Equipo equipo;
public:
	Jugador(Equipo e) :equipo(e) {};
	Equipo getEquipo() { return equipo; };
	void setEquipo(Equipo e) { equipo = e; }
};

