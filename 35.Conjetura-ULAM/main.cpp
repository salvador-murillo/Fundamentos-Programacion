/*FUNDAMENTOS DE PROGRAMACION
  Practica 35 - Conjetura ULAM
  Salvador Murillo Arias
*/
#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "\t\tCONJETURA ULAM";
  cout << "\nIngresa un numero: ";
  cin >> num;
  if (num!=1){
    while (num!=1){
      if (num % 2 == 0){
        cout << num << " ";
        num = num/2;
      }else{
        cout << num << " ";
        num = (num*3) + 1;
      }
    }
  }
  cout << "1";
}
