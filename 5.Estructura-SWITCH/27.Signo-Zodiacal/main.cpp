/*FUNDAMENTOS DE PROGRAMACION
  Practica 27 - Signo Zodiacal
  Salvador Murillo Arias
*/
//  cout << "\033[2J\033[0;0H";//Limpia Pantalla
#include <iostream>
using namespace std;

int main() {
  int mes, dia;

  cout << "\033[2J\033[0;0H";
  cout << "\t\tSIGNO ZODIACAL\n\n";
  cout << "Ingresa el dia en que naciste (#): ";
  cin >> dia;
  if (dia>=1 && dia<=31){
    cout << "Ingresa el mes en que naciste (#): ";
    cin >> mes;
    if(mes>=1 && mes<=12){
      switch (mes){
        case 1:
          if(dia>=1 && dia<=19){
            cout << "\nTu signo es CAPRICORNIO";
          }else if(dia>=20 && dia<=31){
            cout << "\nTu signo es ACUARIO"; 
          }
        break;
        case 2:
          if(dia>=1 && dia<=18){
            cout << "\nTu signo es ACUARIO";
          }else if(dia>=19 && dia<=29){
            cout << "\nTu signo es PISCIS"; 
          }else{
            cout << "\nQue verbo eres, no existe este dia xD.";
          }
        break;
        case 3:
          if(dia>=1 && dia<=20){
            cout << "\nTu signo es PISCIS";
          }else if(dia>=21 && dia<=31){
            cout << "\nTu signo es ARIES"; 
          }
        break;
        case 4:
          if(dia>=1 && dia<=19){
            cout << "\nTu signo es ARIES";
          }else if(dia>=20 && dia<=30){
            cout << "\nTu signo es TAURO"; 
          }else{
            cout << "\nQue verbo eres, no existe este dia xD.";
          }
        break;
        case 5:
          if(dia>=1 && dia<=20){
            cout << "\nTu signo es TAURO";
          }else if(dia>=21 && dia<=31){
            cout << "\nTu signo es GEMINIS"; 
          }
        break;
        case 6:
          if(dia>=1 && dia<=20){
            cout << "\nTu signo es GEMINIS";
          }else if(dia>=21 && dia<=30){
            cout << "\nTu signo es CANCER"; 
          }else{
            cout << "\nQue verbo eres, no existe este dia xD.";
          }
        break;
        case 7:
          if(dia>=1 && dia<=22){
            cout << "\nTu signo es CANCER";
          }else if(dia>=23 && dia<=31){
            cout << "\nTu signo es LEO"; 
          }
        break;
        case 8:
          if(dia>=1 && dia<=22){
            cout << "\nTu signo es LEO";
          }else if(dia>=23 && dia<=31){
            cout << "\nTu signo es VIRGO"; 
          }
        break;
        case 9:
          if(dia>=1 && dia<=22){
            cout << "\nTu signo es VIRGO";
          }else if(dia>=23 && dia<=30){
            cout << "\nTu signo es LIBRA"; 
          }else{
            cout << "\nQue verbo eres, no existe este dia xD.";
          }
        break;
        case 10:
          if(dia>=1 && dia<=22){
            cout << "\nTu signo es LIBRA";
          }else if(dia>=23 && dia<=31){
            cout << "\nTu signo es ESCORPION"; 
          }
        break;
        case 11:
          if(dia>=1 && dia<=21){
            cout << "\nTu signo es ESCORPION";
          }else if(dia>=22 && dia<=30){
            cout << "\nTu signo es SAGITARIO"; 
          }else{
            cout << "\nQue verbo eres, no existe este dia xD.";
          }
        break;
        case 12:
          if(dia>=1 && dia<=21){
            cout << "\nTu signo es SAGITARIO";
          }else if(dia>=22 && dia<=31){
            cout << "\nTu signo es CAPRICORNIO"; 
          }
        break;
      }
    }else{
      cout << "\nEl mes ingresado no es valido.";
    } 
  }else{
    cout << "\nEl dia ingresado no es valido.";
  }
}
