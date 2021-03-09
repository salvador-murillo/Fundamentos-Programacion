/*Fundamentos de Programaci�n
  Practica 13: Captura un n�mero entero positivo.
  Determina si dicho n�mero es par o es impar y muestra en pantalla el resultado.
  Salavador Murillo
  */

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "\033[2J\033[0;0H";
    cout << "\nIngresa un numero entero positivo: "; cin >> num;

    if (num % 2 == 0){
        cout << "\nEl numero es par.";
    }else if(num % 2 != 0){
        cout << "\nEl numero es impar.";
    }
}
