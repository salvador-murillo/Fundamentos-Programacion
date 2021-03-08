/*FUNDAMENTOS DE PROGRAMACION
  Practica 50 - Alfabeto
  Salvador Murillo Arias
*/

#include <iostream>
using namespace std;

int main(){

  for  (char i='z'; i>='a'; i--){
    for (char j=i; j>='a';j--){
      cout << j;
    }
    cout << endl;
  }
}
