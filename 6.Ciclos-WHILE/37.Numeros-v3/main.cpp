/*FUNDAMENTOS DE PROGRAMACION
  Practica 37 - Numeros V3
  Salvador Murillo Arias
*/
#include <iostream>
using namespace std;

int main() {
	int salir;
	do {
		int divisor = 10000, conPar = 0, conImp = 0;
		int numUser, numAlt, mult, digito;
		cout << "\033[2J\033[0;0H";
		cout << "Ingresa un numero entero de 5 digitos:";
		cin >> numUser;
		numAlt = numUser;
		if (numUser >= 10000 && numUser <= 99999) {
			do {
				digito = numAlt / divisor;
				digito % 2 == 0 ? conPar++ : conImp++;
				mult = digito * divisor;
				numAlt -= mult;
				divisor /= 10;
			} while (conPar + conImp < 5);
			cout << "\nEl número " << numUser << " tiene " << conPar
				 << " digitos pares y " << conImp << " digitos impares.\n";
		} else {
			cout << "\nEl numero no es de 5 digitos\n";
		}
		cout << "\nQuieres repetir el programa? Si (1) o No (2): ";
		cin >> salir;
	} while (salir != 2);
  
}
