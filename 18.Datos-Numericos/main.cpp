/*Fundamentos de Programación
  Practica 18: Datos numéricos
  Salavador Murillo
  */

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "\nIngresa un numero: "; cin >> num;

    if (num==0){
        cout << "\nEl numero es cero\n";
    }else if(num>0 && num % 2 == 0){
        cout << "\nEs un numero positivo, es par\n";
    }else if(num>0 && num % 2 != 0){
        if(num % 7 == 0){
            cout << "\nEs un numero positivo, es impar y es multiplo de 7\n";
        }else{
            cout << "\nEs un numero positivo, es impar.\n";
        }
    }else if(num<0){
        cout << "\nEs un numero negativo\n";
    }
    return 0;
}
