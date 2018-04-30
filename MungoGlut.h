#pragma once
#include "math.h"
#include "Mundo.h"
//#include "Juego.h"
//#include "Incio.h"
//#include "Final.h"
//#include "Creditos.h"
//#include "Instrucciones"
//#include "ETSIDI.h"

enum {MOUSE_LEFT_BUTTON, MOUSE_MIDDLE_BUTTON, MOUSE_RIGHT_BUTTON};
enum {KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT};
enum pantalla_t {Inicial, Juego, Final, Creditos, Instrucciones};


class MungoGlut
{
	Mundo*mimundo;
	Pantalla*listaPantallas[6];
	pantalla_t pantallaActual;
public:
	MungoGlut();
	~MungoGlut();
	void MouseButton(int x, int y, int button, bool down, bool shiftKey, bool ctrlKey);
	void Inicializa();
	void Mueve();
	void dibujarPantallaInicial();
};

