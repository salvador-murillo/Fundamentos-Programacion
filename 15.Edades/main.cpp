/*Fundamentos de Programación
  Practica 15: Edades
  Salavador Murillo
  */

#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "\nIngresa tu edad: "; cin >> age;

    if (age >= 60 ){
        cout << "\nEres un Viejito\n";
    }else if(age >= 36 && age <=59 ){
        cout << "\nEres un Adulto\n";
    }else if(age >= 18 && age <=35 ){
        cout << "\nEres un Adulto Joven\n";
    }else if(age >= 14 && age <=17 ){
        cout << "\nEres un Adolescente\n";
    }else if(age >= 0  && age<=13 ){
        cout << "\nEres un Nino\n";
    }else {
        cout << "\nEsta no es una edad valida debe comprender de 0 en adelante\n";
    }
}
