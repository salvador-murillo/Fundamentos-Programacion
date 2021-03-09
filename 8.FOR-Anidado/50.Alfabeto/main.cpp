/*FUNDAMENTOS DE PROGRAMACION
  Practica 50 - Alfabeto
  Salvador Murillo Arias
*/

#include <iostream>
using namespace std;

int main(){
  cout << "\033[2J\033[0;0H";
  for  (char i='z'; i>='a'; i--){
    for (char j=i; j>='a';j--){
      cout << j;
    }
    cout << endl;
  }
}
