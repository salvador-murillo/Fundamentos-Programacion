/*FUNDAMENTOS DE PROGRAMACION
  Practica 44 - Alfabeto Doble
  Salvador Murillo Arias
*/
#include <iostream>
using namespace std;

int main(){
  int ascii_A=65, ascii_a=97;
  char mayus = ascii_A;
  char minus = ascii_a;
  cout << "\033[2J\033[0;0H";
  cout << "El Abecedario es:\n";
  for (int i=1; i<27;i++){
    cout << mayus << minus << " ";
    mayus++;
    minus++;
  }
}
