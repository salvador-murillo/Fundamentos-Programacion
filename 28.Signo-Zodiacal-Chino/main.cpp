/*FUNDAMENTOS DE PROGRAMACION
  Practica 28 - Signo Zodiacal Chino
  Salvador Murillo Arias
*/
//  cout << "\033[2J\033[0;0H";//Limpia Pantalla
#include <iostream>
using namespace std;

int main() {
  int res, anio, anioRes;
  string signo = " ";
  //Modulo Negativo
  //(b + (a%b)) % b;
  //cout << "\033[2J\033[0;0H";
  cout << "\t\tSIGNO ZODIACAL CHINO\n";
  cout << "Ingresa tu anio de nacimiento: ";
  cin >> anio;
  anioRes = anio - 2000;
  res = (12 + (anioRes%12)) % 12;
  switch (res){
    case 0:
      signo = "DRAGON";
    break;
    case 1:
      signo = "SERPIENTE";
    break;
    case 2:
      signo = "CABALLO";
    break;
    case 3:
      signo = "CABRA";
    break;
    case 4:
      signo = "MONO";
    break;
    case 5:
      signo = "GALLO";
    break;
    case 6:
      signo = "PERRO";
    break;
    case 7:
      signo = "CERDO";
    break;
    case 8:
      signo = "RATA";
    break;
    case 9:
      signo = "BUEY";
    break;
    case 10:
      signo = "TIGRE";
    break;
    case 11:
      signo = "CONEJO";
    break;
  }
  cout << "\nTu signo zodical chino es: " << signo << endl;
}
