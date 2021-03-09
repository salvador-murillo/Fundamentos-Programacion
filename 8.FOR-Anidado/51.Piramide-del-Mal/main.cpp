/*FUNDAMENTOS DE PROGRAMACION
  Practica 51 - Piramide del Mal
  Salvador Murillo Arias
*/
#include <iostream>
using namespace std;

int main(){
  int salir;
  do{
    int num, aux=1, con=1;
    cout << "\033[2J\033[0;0H";
    cout << "\t\tPIRAMIDE DEL MAL\n\n";

    cout << "Ingresa un numero:";
    cin >> num;
    cout << endl;
    
    for (int i=1; i<num; i++){
      for(int j=1; j<=con; j++){
        aux<10 ? cout << " 0" : cout << " ";
        cout << aux;
        aux++;
        if(aux>num) break;
      }
      if(aux>num) break;
      con++;
      cout << endl;
    }
    cout << endl;
    cout << "\nQuieres repetir el programa? SI (1) o N0 (2): ";
		cin >> salir;
	} while (salir != 2);
}
