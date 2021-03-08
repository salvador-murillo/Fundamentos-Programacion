/*FUNDAMENTOS DE PROGRAMACION
  Practica 39 - Tabla de Multiplicar
  Salvador Murillo Arias
*/
#include <iostream>
using namespace std;

int main(){
  int salir;
  do{
    int num;
    cout << "\033[2J\033[0;0H";
    cout << "\t\tTABLA DE MULTIPLICAR\n\n";
    cout << "Ingresa la tabla (#) deseada: ";
    cin >> num;
    cout << "\nLas 12 primeras multiplicaciones son:\n\n";
    for (int i=1;i<13;i++){
      cout << num << "x" << i << "=" << num*i << endl;
    }
    cout << "\nQuieres repetir el programa? Si (1) o No (2): ";
		cin >> salir;
	} while (salir != 2);
}
