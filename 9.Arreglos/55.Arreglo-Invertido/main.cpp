/*FUNDAMENTOS DE PROGRAMACION
  Practica 55 - Arreglo Invertido
  Salvador Murillo Arias
*/
#include <iostream>
using namespace std;

int main(){
  int n,i,j;
  cout << "\033[2J\033[0;0H";
  cout << "\t\tArreglo Invertido\n\n";
  cout << "Tamanio Arreglo: ";
  cin >> n;
  int a[n], b[n];
  j = n;

  for(i=0; i<n; i++){
    cout << "Valor #" << i+1 << ": ";
    cin >> a[i];
    b[j-1]=a[i];
    j--;
  }

  cout << "Arreglo A: ";
  for (i=0; i<n; i++){
    cout << a[i] << " ";
  }
  cout << endl;

  cout << "Arreglo B: ";
  for (i=0; i<n; i++){
    cout << b[i] << " ";
  }
}
