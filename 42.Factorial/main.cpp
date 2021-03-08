/*FUNDAMENTOS DE PROGRAMACION
  Practica 42 - Factorial
  Salvador Murillo Arias
*/
#include <iostream>
using namespace std;

int main(){
  int salir;
  do{
    int num;
    long double res=1;
    cout << "\033[2J\033[0;0H";
    cout << "\t\tFACTORIAL DE UN NUMERO\n\n";
    cout << "Ingresa un numero: ";
    cin >> num;
    cout << "\n" << num << "! es: "; 
    for(int i=num;i>=2;i--){
      cout << i << "x";
      res = res*i;
    }
    num==0 ? cout << "1!/1= " : cout << "1 = ";
    cout << res << endl;
    cout << "\nQuieres repetir el programa? Si (1) o No (2): ";
		cin >> salir;
	} while (salir != 2);
}
