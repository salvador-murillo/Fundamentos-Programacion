/*FUNDAMENTOS DE PROGRAMACION
  Practica 60 - Menu de Operaciones
  Salvador Murillo Arias
*/
#include <iostream>
using namespace std;

float a=0, b=0;
int res;

void pedirVariables(){
  cout << "Dame el 1er numero: "; cin >> a;
  cout << "Dame el 2do numero: "; cin >> b;
} 

void suma(){
  cout << "La suma es: " << a + b << endl;
}

void resta(){
  cout << "La resta es: " << a - b << endl;
}

void multiplicacion(){
  cout << "La multiplicacion es: " << a*b << endl;
}

void division(){
  cout << "La division es: " << a / b << endl;
}

void menu(){
  res=0;
  cout << "\033[2J\033[0;0H";
  cout << "\t\tCALCULADORA SIMPLE\n\n";

  cout << "1.SUMA\n" <<
          "2.RESTA\n" <<
          "3.MULTIPLICACION\n" <<
          "4.DIVISION\n" <<
          "\nElige la operacion a realizar: "; 
  cin >> res;
}

void seleccion(){
  switch(res){
    case 1:
      suma();
    break;
    case 2:
      resta();
    break;
    case 3:
      multiplicacion();
    break;
    case 4:
      division();
    break;
  }
}

int main() {
  int opc;
  cout << "\033[2J\033[0;0H";
  do{
    menu();
    if(res>=1&&res<=4){
      pedirVariables();
      seleccion();
    }else{
      cout << "\nOpcion NO valida\n";
    }
    cout << "\nRepetir programa\n" << "1.SI o 2.NO : ";
    cin >> opc;
  }while(opc!=2);
}
