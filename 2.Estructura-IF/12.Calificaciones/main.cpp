/*Fundamentos de Programación
  Practica 12: Calificaciones
  Salavador Murillo
  */

#include <iostream>
using namespace std;

int main() {
	float c1, c2, c3, cF;
	cout << "\033[2J\033[0;0H";
	cout << "\tCALIFICACIONES 2020\n";
	cout << "\nIngresa tu 1er calificacion: ";
	cin >> c1;
	cout << "\nIngresa tu 2da calificacion: ";
	cin >> c2;
	cout << "\nIngresa tu 3ra calificacion: ";
	cin >> c3;

	cF = (c1 + c2 + c3) / 3.0;

	if (cF >= 95.0) {
		cF = 100;
		cout << "\nTu calificacion final es: " << cF;

	} else {
		cout << "\nTu calificacion final es: " << cF;
	}

	return 0;
}
