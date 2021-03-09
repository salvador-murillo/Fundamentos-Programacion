/*FUNDAMENTOS DE PROGRAMACION
  Practica 25 - Menu de Figuras
  Salvador Murillo Arias
*/
//  cout << "\033[2J\033[0;0H";//Limpia Pantalla
#include <iostream>
using namespace std;

int main() {
  const float PI = 3.1415926535;
  int res;
  float num1, num2;
  cout << "\033[2J\033[0;0H";
  cout << "\tMENU DE FIGURAS\n";
  cout << "1.-Área de un triángulo\n";
  cout << "2.-Área de un Círculo\n";
  cout << "3.-Volumen de una Esfera\n";
  cout << "4.-Volumen de un Cilindro\n";
  cout << "\nIngrese el programa a realizar (#): ";
  cin >> res;
  cout << "\033[2J\033[0;0H";

  switch(res){
    case 1:
      cout << "\tAREA DE UN TRIANGULO\n";
      cout << "Ingresa la base: ";
      cin >> num1;
      cout << "Ingresa la altura: ";
      cin >> num2;
      cout << "\nEl area es: " << (num1+num2)/2 << endl;
      break;
    case 2:
      cout << "\tAREA DE UN CIRCULO\n";
      cout << "Ingresa el radio: ";
      cin >> num1;
      cout << "\nEl area es: " << (PI*num1*num1) << endl;
      break;
    case 3:
      cout << "\tVOLUMEN DE UNA ESFERA\n";
      cout << "Ingresa el radio: ";
      cin >> num1;
      cout << "\nEl area es: " << (4*PI*num1*num1*num1)/3 << endl;
      break;
    case 4:
      cout << "\tVOLUMEN DE UNA CILINDRO\n";
      cout << "Ingresa el radio: ";
      cin >> num1;
      cout << "Ingresa la altura: ";
      cin >> num2;
      cout << "\nEl area es: " << (PI*num1*num1*num2) << endl;
      break;
    default:
      cout << "El numero ingresado no es valido\n";
      break;
  }

  return 0;
}
