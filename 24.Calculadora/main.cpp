/*FUNDAMENTOS DE PROGRAMACION
  Practica 24 - Calculadora
  Salvador Murillo Arias
*/
#include <iostream>
using namespace std;
int main() {
  int opc;
  float num1,num2,res;
  cout << "\tCALCULADORA\n";
  cout << "Ingresa el 1er numero:"; cin >> num1;
  cout << "Ingresa el 2do numero:"; cin >> num2;
  cout << "\033[2J\033[0;0H";//Limpia Pantalla
  cout << "\tESCOGE LA OPERACION A REALIZAR\n";
  cout << "\n1.SUMA";
  cout << "\n2.RESTA";
  cout << "\n3.MULTIPLICACION";
  cout << "\n4.DIVISION\n";
  cout << "\nElige una opcion:"; cin >> opc;
  cout << "\033[2J\033[0;0H";//Limpia Pantalla

  switch (opc){
    case 1:
      res=num1+num2;
      break;
    case 2:
      res=num1-num2;
      break;
    case 3:
      res=num1*num2;
      break;
    case 4:
      res=num1/num2;
      break;
    default:
      cout << "\nLa opcion ingresada no es valida\n";
  }
  if(opc>=1 && opc<=4){
    cout << "\nEl resultado es: " << res << endl;
  }

  return 0;

}
