#pragma once
#include "Figuras.h"
class Cuadrado: public Figuras
{
private:
	float alto, ancho;
public:
	Cuadrado();
	Cuadrado(float, float);
	virtual void calcularAreaPerimetro();
};

