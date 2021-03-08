/*
 * Salvador Murillo Arias
 * Practica 7: Segundos a HORAS, MINUTOS, SEGUNDOS.
 */

#include <iostream>
using namespace std;

int main() {

    int tiempo, horas, minutos, segundos;

    cout << "Ingresa una cantidad en segundos: "; cin >> tiempo;

    horas = tiempo / 3600;
    minutos = tiempo % 3600;
    segundos = minutos % 60;
    minutos = minutos / 60;


    cout << "\n" <<tiempo << " segundos equivalen a: " << horas    << " hora (s), "
                                                       << minutos  << " minuto (s), "
                                                       << segundos << " segundo (s)\n"    ;
    return 0;

}
