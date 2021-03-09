/*FUNDAMENTOS DE PROGRAMACION
  Practica 34 - Pares e Impares
  Salvador Murillo Arias
*/
#include <iostream>
using namespace std;

int main() {
  int num, sumPar=0, mulImp=1;
  cout << "\033[2J\033[0;0H";
  cout << "\nAl ingresar #, los PARES se suman hasta ser mayor a 50, los impares se multiplan hasta que sean mayor a 150:\n";

  while (sumPar < 51 || mulImp<151){
    cout << "\nIngresa un numero:";
    cin >> num;
    if (num%2==0){
      sumPar+=num;
      cout << "\nEs PAR\nLa suma va en: " << sumPar << endl;
    }else{
      mulImp*=num;
      cout << "\nEs IMPAR\nEl producto va en: " << mulImp << endl;
    }
  }
  cout << "\nLa suma finalizo en: " << sumPar;
  cout << "\nEl producto finalizo en: " << mulImp;
}
