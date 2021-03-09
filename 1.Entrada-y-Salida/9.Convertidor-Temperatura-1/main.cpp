/*
 * Salvador Murillo Arias
 * Practica 9: Convertidor de Temperaturas P1
*/
#include <iostream>
using namespace std;

int main (){

    float cel, far, kel;
    cout << "\033[2J\033[0;0H";
    cout << "Ingresa una temperatura en grados celsius: ";
    cin  >> cel;
    far = (cel*(9.0/5.0)) + 32.0;
    kel = cel + 273.15;

    cout << "\n\n";
    cout << cel << " grados celsius equivalen a ";
    cout << far << " grados fahrenheit y ";
    cout << kel << " grados kelvin.\n";

    return 0;
}
