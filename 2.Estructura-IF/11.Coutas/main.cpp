/*
 * Salvador Murillo Arias
 * Practica 11 - Cuotas
*/
#include <iostream>
using namespace std;

int main (){

    char resp;
    int ins = 100, taller = 200;
    cout << "\033[2J\033[0;0H";
    cout << "\t\tBienvenido al congreso COVID-2020\n\n";
    cout << "Si es publico en general escriba 0, si es estudiante escriba 1: ";
    cin  >> resp;

    if(resp == '1'){
        ins = ins/2;
        taller = taller/2;
        cout << "\n\nPor ser estudiante obtiene 50% de descuento, los costos son:\n";
        cout << "Inscripcion: $" << ins << endl;
        cout << "Taller: $" << taller << endl;
    }else{
        cout << "\n\nLos costos al publico en general son:\n";
        cout << "Inscripcion: $" << ins << endl;
        cout << "Taller: $" << taller << endl;
    }

    return 0;
}
