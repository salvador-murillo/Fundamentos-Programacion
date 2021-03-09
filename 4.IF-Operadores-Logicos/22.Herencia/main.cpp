/*FUNDAMENTOS DE PROGRAMACION
 Practica 22: Herencia
 Salvador Murillo Arias
 */

#include <iostream>
using namespace std;

int main() {
    int respHijos;
    float conyugeHerencia, hijosHerencia, herencia, comision;
    cout << "\033[2J\033[0;0H";
    cout << "\tHERENCIA\n" ;
    cout << "\nIngrese el monto de la herencia: $"; cin >> herencia;
    cout << "\nnumero de hijos (en numero):"; cin >> respHijos;
    cout << "\nLa herencia de $" << herencia << " sera repartida de la siguiente manera:";
    if (respHijos == 0){
        conyugeHerencia = herencia*.95;
        comision = herencia*.05;
        cout << "\nComision notario (5%): $"<< comision;
        cout << "\nConyugue (95%): $" << conyugeHerencia << endl;
    }else if (respHijos >0){
        comision = herencia*.03;
        conyugeHerencia = (herencia*.97)/2;
        hijosHerencia = ((herencia*.97)/2)/respHijos;
        cout << "\nComision notario (3%): $"<< comision;
        cout << "\nConyugue (50% menos comision): $" << conyugeHerencia;
        cout << "\nHijos (50% / #hijos menos comision): $" << hijosHerencia << " c/hijo\n";
    }
    return 0;
}
