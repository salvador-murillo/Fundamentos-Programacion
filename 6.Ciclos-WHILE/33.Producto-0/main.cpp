/*FUNDAMENTOS DE PROGRAMACION
  Practica 33 - Producto 0
  Salvador Murillo Arias*/

#include <iostream>
using namespace std;

int main() {
  float a,b, c=1;
  cout << "\033[2J\033[0;0H";
  
  while(c!=0){
    cout << "\nIngrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    c=a*b;
    cout << "\nLa multiplicacion es: " << c << endl;
  }
}
