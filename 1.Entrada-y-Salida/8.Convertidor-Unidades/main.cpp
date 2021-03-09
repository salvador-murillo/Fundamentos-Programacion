/*
 * Salvador Murillo Arias
 * Practica 8: Convertidor de unidades
*/
#include <iostream>
using namespace std;

int main (){

    float dis, yardas, millas, pies;
    cout << "\033[2J\033[0;0H";
    cout << "Ingresa una medida en metros: "; cin >> dis;

    yardas = dis * 1.09361;
    millas = dis * 0.000621372;
    pies   = dis * 3.28084;

    cout << "\n\n";
    cout << dis    << " metros equivalen a ";
    cout << yardas << " yardas, ";
    cout << millas << " millas y ";
    cout << pies   << " pies.\n";

    return 0;
}
