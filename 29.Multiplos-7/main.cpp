/*FUNDAMENTOS DE PROGRAMACION
  Practica 29 - Multiplos de 7
  Salvador Murillo Arias
*/
//  cout << "\033[2J\033[0;0H";//Limpia Pantalla
#include <iostream>
using namespace std;

int main() {
  int num=0, a=0;
  cout << "\033[2J\033[0;0H";
  cout << "\nEste programa muestra los multiplos de 7 que existen del 0 al 100:\n";

  while(num<100){
    num=7*a;
    a++;
    if (num<100){
      cout << num << " ";
    }
  }
}
