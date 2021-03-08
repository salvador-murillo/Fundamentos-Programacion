/*Fundamentos de Programación
  Practica 13: Captura un número entero positivo.
  Determina si dicho número es par o es impar y muestra en pantalla el resultado.
  Salavador Murillo
  */

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "\nIngresa un numero entero positivo: "; cin >> num;

    if (num % 2 == 0){
        cout << "\nEl numero es par.";
    }else if(num % 2 != 0){
        cout << "\nEl numero es impar.";
    }
}
