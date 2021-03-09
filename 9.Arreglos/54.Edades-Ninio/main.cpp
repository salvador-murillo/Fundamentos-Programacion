/*FUNDAMENTOS DE PROGRAMACION
  Practica 54 - Edades niño
  Salvador Murillo Arias
*/
#include <iostream>
using namespace std;

int main(){
  int salir;
  do{
    int n,i, e=0;
    cout << "\033[2J\033[0;0H";
    cout << "\t\tEdades Niño\n\n";
    cout << "Cuantas edades quieres capturar?: ";
    cin >> n;
    int edad[n];

    for(i=0; i<n; i++){
      cout << "Edad del #" << i+1 << ":";
      cin >> edad[i];
    }

    cout << "\nDe que ninio quieres saber la edad: ";
    cin >> e;
    cout << "\nLa edad del ninio #" << e << " es: " << edad[e-1];


    cout << "\nRepetir programa SI (1) o NO (2): ";
    cin >> salir;
  }while(salir !=2);

}
