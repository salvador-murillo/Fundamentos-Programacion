/*FUNDAMENTOS DE PROGRAMACION
  Práctica 30 - Múltiplos de 7 entre rangos
  Salvador Murillo Arias
*/
//  cout << "\033[2J\033[0;0H";//Limpia Pantalla
#include <iostream>
using namespace std;

int main() {
  int ranMenor, ranMayor;
  int num=0, a=1;
  cout << "\033[2J\033[0;0H";
  cout << "\nEste programa muestra los multiplos de 7 que existen entre el rango inferior y superior ingresados por el usuario\n";
  cout << "Ingresa el rango inferior: ";
  cin >> ranMenor;
  cout << "Ingresa el rango superior: ";
  cin >> ranMayor;

  cout << "\nLos multiplos de 7 entre " << ranMenor << " y " << ranMayor << " son: ";

  if (ranMayor - ranMenor !=0){
    a = ranMenor/7;
    while(num<=ranMayor){
    num=7*a;
    a++;
      if (num >= ranMenor && num<=ranMayor && num!=0){
      cout << num << " ";
      }
    }
  }else{
    cout << "\nLos rangos no son validos.\n";
  }
}
