/*FUNDAMENTOS DE PROGRAMACION
  Practica 36 - Decimal a Binario
  Salvador Murillo Arias
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
  int n,r;
  string nBin;

  do{
    cout << "\033[2J\033[0;0H";
    cout << "\t\tDECIMAL a BINARIO\n";
    cout << "\nIngresa un numero entero: ";
    cin >> n;
    nBin = "";

    while(n>=1){
      if(n%2==0){
        nBin = "0" + nBin;
      }else{
        nBin = "1" + nBin;
      }
      n = n/2;
    }
    cout << "El binario es: " << nBin << endl;
    cout << "\nQuieres repetir el programa 1-SI 0-NO: ";
    cin >> r;
  }while(r!=0); 
}
