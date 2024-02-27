#include<iostream>
#include"Cuadrado.h"
#include"Figuras.h"
#include"Rectangulo.h"

using namespace std;
int main() {
	cout << "Figura 1"<<endl;
	Cuadrado objeto1(5,5);
	objeto1.calcularAreaPerimetro();
	objeto1.mostrarArea();
	objeto1.mostrarPerimetro();
	cout << "Figura 2"<<endl;
	Rectangulo objeto2(5,4);
	objeto2.calcularAreaPerimetro();
	objeto2.mostrarArea();
	objeto2.mostrarPerimetro();
	return 0;
}