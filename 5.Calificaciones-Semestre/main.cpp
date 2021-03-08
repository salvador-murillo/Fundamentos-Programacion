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
	cout << "Dame la 1ra calificación de tarea:"; cin >> num1;
	cout << "Dame la 2da calificación de tarea:"; cin >> num2;
	cout << "Dame la 3ra calificación de tarea:"; cin >> num3;
	cout << "Dame la 4ta calificación de tarea:"; cin >> num4;
	cout << "Dame la 5ta calificación de tarea:"; cin >> num5;
    cT= ((num1 + num2 + num3 + num4 + num5) / 5.0)*.25;
	cout << "\nTu calificación de tareas es: " << cT;

	//Calificación Practicas
	cout << "\n\nDame la calificación de la practica 1:"; cin >> num1;
	cout << "Dame la calificación de la practica 2:"; cin >> num2;
	cout << "Dame la calificación de la practica 3:"; cin >> num3;
    cP = ((num1 + num2 + num3 ) / 3.0)*.35;
    cout << "\nTu calificación de practicas es: " << cP;

    //Calificación Examenes
    cout << "\n\nDame la calificación de tu 1er examen:"; cin >> num1;
	cout << "Dame la calificación de tu 2do examen:"; cin >> num2;
	cE = ((num1 + num2) / 2.0)*.20;
	cout << "\nTu calificación de examenes es: " << cE;

	//Calificacion de Proyecto
	cout << "\n\nDame la calificación de tu proyecto:"; cin >> num1;
	cPro = num1 *.20;
	cout << "\nTu calificación de proyecto es: " << cPro;

	//Calificacion Final
	cFIN = cT + cP + cE + cPro;
	cout << "\n\nTu calificación total es: " << cFIN;

	return 0;
}
