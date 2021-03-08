/*Fundamentos de Programación
  Practica 19: Triangulos
  Salavador Murillo
  */

#include <iostream>
using namespace std;

int main() {
    int ladoA,ladoB,ladoC;
    cout << "\t\tTRIANGULOS\n";
    cout << "\nIngresa el 1er lado del triangulo: "; cin >> ladoA;
    cout << "\nIngresa el 2do lado del triangulo: "; cin >> ladoB;
    cout << "\nIngresa el 3er lado del triangulo: "; cin >> ladoC;

    if (ladoA == ladoB && ladoB == ladoC){
        cout << "\nEs un triangulo EQUILATERO\n";
    }else if (ladoA == ladoB || ladoB == ladoC || ladoA == ladoC){
        cout << "\nEs un triangulo ISOSCELES\n";
    }else {
        cout << "\nEs un triangulo ESCALENO\n";
    }
    return 0;
}
