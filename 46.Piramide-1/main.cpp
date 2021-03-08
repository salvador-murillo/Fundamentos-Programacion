/*FUNDAMENTOS DE PROGRAMACION
  Practica 46 - Piramides Parte 1
  Salvador Murillo Arias
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	int salir;
	do{
		int i,j,k,num,x=0,y=0;
		char ast = '*';
		char guion = '_';

		cout <<"Dame un numero:";
		cin >>num;
		
		//46 - Menor a Mayor con *
		for (i=1; i<=num; i++){
			for(j=1; j<=i; j++){
				cout << ast;
			}
			cout << endl;
		}

		cout << endl;

		//47 - Mayor a Menor con *
		for (i=num; i>=1; i--){
			for(j=1; j<=i; j++){
				cout << ast;
			}
			cout << endl;
		}

		cout << endl;

		//48 - Menor a Mayor con * y luego _
		for (i=num; i>=1; i--){
			for (j=0; j<x; j++){
				cout << guion;
			}
			for(k=1; k<=i; k++){
				cout << ast;
			}
			cout << endl;
			x++;
		}

		cout << endl;

		//49 - Mayor a Menor con _ y luego *
		for (i=num; i>=1; i--){
			for (j=1; j<i; j++){
				cout << guion;
			}

			for(k=0; k<=y; k++){
				cout << ast;
			}
			cout << endl;
			y++;
		}
		
		cout << endl;

		cout <<"Quieres repetir programa SI (1) / NO (0):";
		cin >> salir;
	}while(salir!=0);
}
