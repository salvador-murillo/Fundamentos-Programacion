/*FUNDAMENTOS DE PROGRAMACION
  Practica 45 - Linea con cambio de color
  Salvador Murillo Arias
*/
#include <iostream>
#include <random>   //Crear numeros aleatorios
#include <unistd.h> //Funcion sleep
using namespace std;

int main() {
  
	random_device rd;  // Obtiene un # random del dispositivo
	mt19937 gen(rd()); // Generador de numeros (Merssene Twister Algoritmo)
	uniform_int_distribution<> rC(30, 37); // Rango de #s para los colores linux
  	uniform_int_distribution<> rI(0,1); // Color Fondo-Primer Plano 
	
	cout << "\033[2J\033[0;0H";
	int salir;
	do {
		int num=0, a;
		cout << "Asteriscos a mostrar:";
		cin >> num;
		for (int i=0; i<num; i++) {
      		a=rI(gen);
      		a==0?a+=7:a=a; // Numero para invertir el fondo 1 o 7
			cout <<"\033["<< a <<";"<< rC(gen) <<"m* \033[0m";
			cout.flush();   // Buffer
			usleep(500000); // Tiempo en microsegundos
		}
		cout << "\nQuieres repetir el programa? Si (1) o No (2): ";
		cin >> salir;
		cout << endl;
	} while (salir != 2);
}
