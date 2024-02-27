#pragma once
class Figuras
{
	//ENCAPSULAMIENTO
	//usamos protected para que las clases hijas
	//puedan heredar y modificar las varibles de las clase padre
	//con private no se puede hacer uso de esas variables fuera de la propia clase
protected:
	float perimetro, area;
public:
	Figuras();
	Figuras(float, float);
	virtual void mostrarPerimetro();
	virtual void mostrarArea();
};

