/*FUNDAMENTOS DE PROGRAMACION
  Practica 56 - Posicion de un valor en un arreglo
  Salvador Murillo Arias
*/
#include <iostream>
using namespace std;

int main() {
  int salir;
  do{
    int n,i=0,can,alt;
    cout << "\033[2J\033[0;0H";
    cout << "\t\tPosicion Arreglo\n\n";
    cout << "Ingresa el tamanio del arreglo: ";
    cin >> n;
    int a[n];
    cout << endl;
    for(i=0; i<n; i++){
      cout << "Valor #" << i+1 << ": ";
      cin >> a[i];
    }

    do{
      cout << "\nIngresa la cantidad a buscar: ";
      cin >> can;
      for(i=0;i<n;i++){
        if(a[i] == can){
          cout << "El valor se encuentra en la posicion #" << i << " del arreglo";
          alt=can;
          break;
        }
      }
      if(can!=alt){
        cout << "Error, no existe este valor\n";
      }
    }while(can!=alt);

    cout << "\nRepetir programa SI (1) o NO (2): ";
    cin >> salir;
  }while(salir !=2);
}
