/*FUNDAMENTOS DE PROGRAMACION
  Practica 21: Ordenar Numeros
  Salvador Murillo Arias
*/
#include <iostream>
using namespace std;

int main(){
    int a,b,c,v;
    cout << "\033[2J\033[0;0H";
    cout << "\t\tPRACTICA 21: Ordenar Numeros";
    cout << "\nIngresa el 1er numero: "; cin >> a;
    cout << "\nIngresa el 2do numero: "; cin >> b;
    cout << "\nIngresa el 3er numero: "; cin >> c;

    cout << "\n  Tus numeros ingresados son: " << a << " " << b << " " << c;

    if(a == b && b > c){
        a = c;
        c = b;
    }else if(a > b && b == c){
        c = a;
        a = b;
    }else if(a > b && a == c){
        a = b;
        b = c;
    }else if(b > c && a == c){
        c = b;
        b = a;
    }else if(a > b && a < c){
        v = b;
        b = a;
        a = v;
    }else if(a > b && b > c){
        v = c;
        c = a;
        a = v;
    }else if(a < b && b > c){
        v = c;
        c = b;
        b = a;
        a = v;
    }else if(a > b && b < c){
        v = a;
        a = b;
        b = c;
        c = v;
    }

    cout << "\nEl orden de menor a mayor es: " << a << " " << b << " " << c << endl;
    return 0;
}
