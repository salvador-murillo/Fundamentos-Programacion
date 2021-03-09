/*FUNDAMENTOS DE PROGRAMACION
  Practica 41 - Numeros Primos
  Salvador Murillo Arias
*/
#include <iostream>
using namespace std;

int main(){
  int salir;
  do{
    int num, con=0;
    cout << "\033[2J\033[0;0H";
    cout << "\t\tES NUMERO PRIMO?\n\n";
    cout << "Ingresa un numero: ";
    cin >> num;
    for(int i=1;i<=num;i++){
      if(num%i==0){
          con+=1;
      }
    }
    con==2 
    ? cout << "\nEl " << num << " SI es primo.\n" 
    : cout << "\nEl " << num << " NO es primo.\n";  
    cout << "\nQuieres repetir el programa? Si (1) o No (2): ";
		cin >> salir;
	} while (salir != 2);
}
