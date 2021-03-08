/*FUNDAMENTOS DE PROGRAMACION
  Practica 57 - Suma de Arreglos
  Salvador Murillo Arias
*/
#include <iostream>
#include <random>   //Crear numeros aleatorios
using namespace std;

int main() {
  
	random_device rd;  // Obtiene un # random del dispositivo
	mt19937 gen(rd()); // Generador de numeros (Merssene Twister Algoritmo)
	uniform_int_distribution<> randNum(1,100); //Define rango de numeros

	int salir;
	do {
		int n, i;
    cout << "\033[2J\033[0;0H";
		cout << "\t\tSUMA DE ARREGLOS\n\n";
    cout << "Ingresa el tamanio del arreglo: ";
		cin >> n;
    int a[n],b[n],c[n];

    for(i=0;i<n;i++){
      a[i]=randNum(gen);
      b[i]=randNum(gen);
      c[i]=a[i]+b[i];
    }
		cout << endl;

    cout << "Arreglo A: ";
    for (i=0; i<n; i++){
      cout << a[i] << " ";
    }
    cout << endl;

    cout << "Arreglo B: ";
    for (i=0; i<n; i++){
      cout << b[i] << " ";
    }
    cout << endl;

    cout << "Arreglo C: ";
    for (i=0; i<n; i++){
      cout << c[i] << " ";
    }
    cout << endl;

		cout << "\nQuieres repetir el programa? Si (1) o No (2): ";
		cin >> salir;
	} while (salir != 2);
}
