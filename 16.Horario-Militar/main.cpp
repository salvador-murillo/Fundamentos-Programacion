/*FUNDAMENTOS DE PROGRAMACION
    Práctica 16 - Horario Militar
    Salvador Murillo Arias
*/

#include <iostream>
using namespace std;

int main() {
    int h,m;
    cout << "\nIngresa una hora en formato militar ejemplo: 23:55\n\t(Rango Hora 00-23 y Minutos 00-59\n";
    cout << "\nIngresa la hora: "; cin >> h;
    cout << "\nIngresa los minutos: "; cin >> m;

    if(m>=10 && m<60){
        if (h >=0 && h<1){
            cout << "\nLa hora es: " << h+12 << ":" << m << " am\n";
        }else if(h >0 && h<13){
            cout << "\nLa hora es: " << h << ":" << m << " am\n";
        }else if (h >=13 && h<=23){
            cout << "\nLa hora es: " << h-12 << ":" << m << " pm\n";
        }else {
            cout << "\nLa hora y/o minutos ingresados no son validos\n";
        }
    }else if (m>=0 && m<10){
        if (h >=0 && h<1){
            cout << "\nLa hora es: " << h+12 << ":0" << m << " am\n";
        }else if(h >0 && h<13){
            cout << "\nLa hora es: " << h << ":0" << m << " am\n";
        }else if (h >=13 && h<=23){
            cout << "\nLa hora es: " << h-12 << ":0" << m << " pm\n";
        }else {
            cout << "\nLa hora y/o minutos ingresados no son validos\n";
        }
    }else {
        cout << "\nLa hora y/o minutos ingresados no son validos\n";
    }
    return 0;
}
