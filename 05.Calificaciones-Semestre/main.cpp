/*
   Salavador Murillo
   Practica 5: Calificaciones del Semestre

  */

#include <iostream>
using namespace std;

int main() {
    //Variables Generales
    float num1,num2,num3,num4,num5;
	// Variables califificacion
	float cT, cP, cE, cPro, cFIN;

	//Calificaciones de Tareas
	cout << "Dame la 1ra calificaci�n de tarea:"; cin >> num1;
	cout << "Dame la 2da calificaci�n de tarea:"; cin >> num2;
	cout << "Dame la 3ra calificaci�n de tarea:"; cin >> num3;
	cout << "Dame la 4ta calificaci�n de tarea:"; cin >> num4;
	cout << "Dame la 5ta calificaci�n de tarea:"; cin >> num5;
    cT= ((num1 + num2 + num3 + num4 + num5) / 5.0)*.25;
	cout << "\nTu calificaci�n de tareas es: " << cT;

	//Calificaci�n Practicas
	cout << "\n\nDame la calificaci�n de la practica 1:"; cin >> num1;
	cout << "Dame la calificaci�n de la practica 2:"; cin >> num2;
	cout << "Dame la calificaci�n de la practica 3:"; cin >> num3;
    cP = ((num1 + num2 + num3 ) / 3.0)*.35;
    cout << "\nTu calificaci�n de practicas es: " << cP;

    //Calificaci�n Examenes
    cout << "\n\nDame la calificaci�n de tu 1er examen:"; cin >> num1;
	cout << "Dame la calificaci�n de tu 2do examen:"; cin >> num2;
	cE = ((num1 + num2) / 2.0)*.20;
	cout << "\nTu calificaci�n de examenes es: " << cE;

	//Calificacion de Proyecto
	cout << "\n\nDame la calificaci�n de tu proyecto:"; cin >> num1;
	cPro = num1 *.20;
	cout << "\nTu calificaci�n de proyecto es: " << cPro;

	//Calificacion Final
	cFIN = cT + cP + cE + cPro;
	cout << "\n\nTu calificaci�n total es: " << cFIN;

	return 0;
}
