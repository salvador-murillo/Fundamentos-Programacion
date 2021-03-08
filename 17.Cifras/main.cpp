/*Fundamentos de Programación
  Practica 17: Cifras
  Salavador Murillo
  */

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "\nIngresa un numero: "; cin >> num;

    if (num>=0 && num<10){
        cout << "\nEl numero ingresado es de 1 digito\n";
    }else if(num>=10 && num<100){
        cout << "\nEl numero ingresado es de 2 digitos\n";
    }else if(num>=100 && num<1000){
        cout << "\nEl numero ingresado es de 3 digitos\n";
    }else if(num>=1000 && num<10000){
        cout << "\nEl numero ingresado es de 4 digitos\n";
    }else if(num>=10000 && num<=32700){
        cout << "\nEl numero ingresado es de 5 digitos\n";
    }else{
        cout << "\nEl numero ingresado no es valido\n";
    }
}
