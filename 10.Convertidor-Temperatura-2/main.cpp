/*
 * Salvador Murillo Arias
 * Practica 10: Convertidor de Temperaturas P2
*/
#include <iostream>
using namespace std;

int main (){

    float cel, far, kel;

    cout << "Ingresa una temperatura en grados fahrenheit: ";
    cin  >> far;
    cel = (far - 32.0) *(5.0/9.0);
    kel = (far - 32.0) *(5.0/9.0) + 273.15;

    cout << "\n\n";
    cout << far << " grados fahrenheit equivalen a ";
    cout << cel << " grados celsius y ";
    cout << kel << " grados kelvin.\n";

    return 0;
}
