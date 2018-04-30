#pragma once
class Posicion//Clase VIRTUAL PURA
{
public:
	int fila, columna;
	Posicion() {};
	Posicion(int f, int c) :fila(f), columna(c) {};
	bool operator ==(Posicion p) { //sobrecarga del operador
		if ((fila == p.fila) && (columna == p.columna))
			return true;
		return false;
	}
};

