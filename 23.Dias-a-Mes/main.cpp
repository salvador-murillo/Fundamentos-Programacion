/*FUNDAMENTOS DE PROGRAMACION
 Practica 23: Dias a mes
 Salvador Murillo Arias
 */

#include <iostream>
using namespace std;

int main() {
    int dias;
    
    cout << "\nIngresa el numero de dias:";
    cin >> dias;
    
    if (dias >=1 && dias<=31){
        cout << "\n" << dias << " - Enero\n";
    }else if (dias >31 && dias<=59){
        cout << "\n" << dias << " - Febrero\n";
    }else if (dias >59 && dias<=90){
        cout << "\n" << dias << " - Marzo\n";
    }else if (dias >90 && dias<=120){
        cout << "\n" << dias << " - Abril\n";
    }else if (dias >120 && dias<=151){
        cout << "\n" << dias << " - Mayo\n";
    }else if (dias >151 && dias<=181){
        cout << "\n" << dias << " - Junio\n";
    }else if (dias >181 && dias<=212){
        cout << "\n" << dias << " - Julio\n";
    }else if (dias >212 && dias<=243){
        cout << "\n" << dias << " - Agosto\n";
    }else if (dias >243 && dias<=273){
        cout << "\n" << dias << " - Septiembre\n";
    }else if (dias >273 && dias<=304){
        cout << "\n" << dias << " - Octubre\n";
    }else if (dias >304 && dias<=334){
        cout << "\n" << dias << " - Noviembre\n";
    }else if (dias >334 && dias<=365){
        cout << "\n" << dias << " - Diciembre\n";
    }else{
        cout << "\nLos dias ingresados no estan en el rango del calendario.\n";
    }
    
    return 0;
}
