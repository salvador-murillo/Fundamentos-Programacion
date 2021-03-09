/*FUNDAMENTOS DE PROGRAMACION
  Practica 43 - Fibonacci
  Salvador Murillo Arias
*/
#include <iostream>
#include <string>
//to_string(42); Convertir numero a cadena
using namespace std;

int main(){
  int salir;
  do{
    int num, dA=0, dB=1, dC=0;
    string serie = "";
    cout << "\033[2J\033[0;0H";
    cout << "\t\tSERIE DE FIBONACCI\n\n";
    cout << "Cuantos numeros de la serie quieres ver: ";
    cin >> num;
    for(int i=1;i<num;i++){
      if(dC==0){
        serie = to_string(dA) + " " + to_string(dB);
      }else if(dC>=1){
        serie = serie + " " + to_string(dC);
      }
      dC = dA + dB;
      dA = dB;
      dB = dC;
    }
    cout << "\nLa serie es: " << serie << endl;
    cout << "\nQuieres repetir el programa? Si (1) o No (2): ";
		cin >> salir;
	} while (salir != 2);
}
