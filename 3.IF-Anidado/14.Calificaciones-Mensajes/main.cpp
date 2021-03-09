/*Fundamentos de Programaci�n
  Practica 14: Calificaciones y Mensajes
  Salavador Murillo
  */

#include <iostream>
using namespace std;

int main() {
    int cal;
    cout << "\033[2J\033[0;0H";
    cout << "\nIngresa tu calificacion: "; cin >> cal;

    if (cal == 100 ){
        cout << "\nEXCELENTE\n";
    }else if(cal >= 80 && cal <=99 ){
        cout << "\nMUY BIEN\n";
    }else if(cal >= 60 && cal <=79 ){
        cout << "\nBIEN\n";
    }else if(cal >= 40 && cal <=59 ){
        cout << "\nMAL\n";
    }else if(cal >= 0  && cal<=39 ){
        cout << "\nPESIMO\n";
    }else {
        cout << "\nEste no es un numero valido de calificacion debe comprender de 0 a 100\n";
    }
}
