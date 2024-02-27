#pragma once
#include "Figuras.h"
#include "Cuadrado.h"
class Rectangulo : public Cuadrado
{
public:
	Rectangulo(float _alto,float _ancho) : Cuadrado(_alto,_ancho) {};
};