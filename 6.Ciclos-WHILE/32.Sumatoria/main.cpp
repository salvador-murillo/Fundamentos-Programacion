/*FUNDAMENTOS DE PROGRAMACION
  Practica 32 - Sumatoria
  Salvador Murillo Arias
*/
//  cout << "\033[2J\033[0;0H"; Limpia Pantalla
#include <iostream>
using namespace std;

int main() {
  int numUser, numRes;
  cout << "\033[2J\033[0;0H";
  cout << "\nEste programa pide numeros al usuario y los suma hasta que llegue a 100\n";
  cout << "Ingresa un numero: ";
  cin >> numUser;
  if (numUser <100){
    numRes=numUser;
    while (numRes<100){
      cout << "\nIngresa otro numero: ";
      cin >> numUser;
      numRes=numRes+numUser;
      if(numRes<100){
        cout << "La suma va en: " << numRes;
      }
    }
    cout << "\nLa suma finalizo en: " << numRes;
  }else{
    cout << "\nEl numero ingresado ya es igual o superior a 100";
  }
}
