/*FUNDAMENTOS DE PROGRAMACION
  Practica 58 - Manejo de Arreglos
  Salvador Murillo Arias
*/
#include <iostream>
#include <random>   //Crear numeros aleatorios
using namespace std;

int main() {
  
	random_device rd;  // Obtiene un # random del dispositivo
	mt19937 gen(rd()); // Generador de numeros (Merssene Twister Algoritmo)
	uniform_int_distribution<> randNum(0,100); //Define rango de numeros

	int salir;
	do {
		int i, nPar=0, nImp=0, sPar=0, sImp=0, pParMayor=0,vParMayor=0, pImpMenor=0, vImpMenor=101;
    cout << "\033[2J\033[0;0H";
		cout << "\t\tMANEJO DE ARREGLOS\n\n";
    int a[20];

    cout << "Arreglo: " << endl;
    for(i=0;i<20;i++){
      a[i]=randNum(gen);
      cout << a[i] << " ";
      if(a[i]%2==0){
        nPar++;
        sPar+=a[i];
        if(a[i]>vParMayor){
          vParMayor = a[i];
          pParMayor = i;
        }
      }else{
        nImp++;
        sImp+=a[i];
        if(a[i]<vImpMenor){
          vImpMenor = a[i];
          pImpMenor = i;
        }
      }
    }
    cout << "\n\n";
    
    cout << "Cantidad Pares: " << nPar << endl;
    cout << "Cantidad Impares: " << nImp << "\n\n";
    cout << "Suma Pares: " << sPar << endl;
    cout << "Suma Impares: " << sImp << "\n\n";
    cout << "Mayor PAR | Pos: " << pParMayor + 1 << " Valor: " << vParMayor << endl;
    cout << "Menor IMPAR | Pos: " << pImpMenor + 1 << " Valor: " << vImpMenor << endl;

		cout << "\nQuieres repetir el programa? Si (1) o No (2): ";
		cin >> salir;
	} while (salir != 2);
}
