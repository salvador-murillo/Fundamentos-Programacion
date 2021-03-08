/*FUNDAMENTOS DE PROGRAMACION
  Practica 26 - Convertidor de Medidas
  Salvador Murillo Arias
*/
//  cout << "\033[2J\033[0;0H";//Limpia Pantalla
#include <iostream>
using namespace std;

int main() {
  int res, res2;
  float pol,polR;
  string uni1,uni2;
  cout << "\033[2J\033[0;0H";
  cout << "\tCONVERTIDOR DE MEDIDAS\n";
  cout << "\n1.-Unidades de Peso\n";
  cout << "2.-Unidades de Longitud\n";
  cout << "\nIngrese el programa a realizar (#): ";
  cin >> res;
  cout << "\033[2J\033[0;0H";

  switch(res){
    case 1:
      cout << "\tUNIDADES DE PESO\n";
      cout << "\n1.-GRAMOS\n";
      cout << "2.-LIBRAS\n";
      cout << "3.-ONZAS\n";
      cout << "4.-PIEDRAS\n";
      cout << "\nElige QUE quieres convertir (#): ";
      cin >> res;
      if (res==1 || res==2 || res==3 || res==4){
        cout << "\033[2J\033[0;0H";
        cout << "\nIngresa la cantidad a convertir: ";
        cin >> pol;
        cout << "\033[2J\033[0;0H";
        cout << "\tUNIDADES DE PESO\n";
        cout << "\n1.-GRAMOS\n";
        cout << "2.-LIBRAS\n";
        cout << "3.-ONZAS\n";
        cout << "4.-PIEDRAS\n";
        cout << "\nElige A QUE quieres convertir (#): ";
        cin >> res2;
        cout << "\033[2J\033[0;0H";
        
        switch (res){
          case 1:
            if(res2==1){
              polR=pol;
              uni2 = "g (gramos) ";
            }else if(res2==2){
              polR=pol/454;
              uni2 = "lb (libras) ";
            }else if(res2==3){
              polR=pol/28.35;
              uni2 = "oz (onzas) ";
            }else if(res2==4){
              polR=pol/6350.29318;
              uni2 = "st (piedras) ";
            }else{
              cout << "\nEl numero ingresado no esta en la lista de las unidades a convertir (M21)";
            }
          uni1 = "g (gramos) ";
          break;
          case 2:
            if(res2==1){
              polR=pol*454;
              uni2 = "g (gramos) ";
            }else if(res2==2){
              polR=pol;
              uni2 = "lb (libras) ";
            }else if(res2==3){
              polR=pol*16;
              uni2 = "oz (onzas) ";
            }else if(res2==4){
              polR=pol/14;
              uni2 = "st (piedras) ";
            }else{
              cout << "\nEl numero ingresado no esta en la lista de las unidades a convertir (M22)";
            }
          uni1 = "lb (libras) ";
          break;
          case 3:
            if(res2==1){
              polR=pol*28.35;
              uni2 = "g (gramos) ";
            }else if(res2==2){
              polR=pol/16;
              uni2 = "lb (libras) ";
            }else if(res2==3){
              polR=pol;
              uni2 = "oz (onzas) ";
            }else if(res2==4){
              polR=pol/224;
              uni2 = "st (piedras) ";
            }else{
              cout << "\nEl numero ingresado no esta en la lista de las unidades a convertir (M23)";
            }
          uni1 = "oz (onzas) ";
          break;
          case 4:
            if(res2==1){
              polR=pol*6350.29318;
              uni2 = "g (gramos) ";
            }else if(res2==2){
              polR=pol*14;
              uni2 = "lb (libras) ";
            }else if(res2==3){
              polR=pol*224;
              uni2 = "oz (onzas) ";
            }else if(res2==4){
              polR=pol;
              uni2 = "st (piedras) ";
            }else{
              cout << "\nEl numero ingresado no esta en la lista de las unidades a convertir (M24)";
            }
          uni1 = "st (piedras) ";
          break;
          default:
            cout << "\nEl numero ingresado no esta en la lista de las unidades a convertir (M1)";
          break;
        }
        if(res2==1 || res2==2 || res2==3 || res2==4){
          cout << endl << pol << uni1 << "equivalen a " << polR << uni2 << endl;
        }
      }else{
        cout << "\nEl numero ingresado no esta en la lista de las unidades a convertir (M0)";
      }
    break;
    case 2:
      cout << "\tUNIDADES DE LONGITUD\n";
      cout << "\n1.-MILLA\n";
      cout << "2.-YARDA\n";
      cout << "3.-PIE\n";
      cout << "4.-PULGADA\n";
      cout << "\nElige QUE quieres convertir (#): ";
      cin >> res;
      if (res==1 || res==2 || res==3 || res==4){
        cout << "\033[2J\033[0;0H";
        cout << "\nIngresa la cantidad a convertir: ";
        cin >> pol;
        cout << "\033[2J\033[0;0H";
        cout << "\tUNIDADES DE LONGITUD\n";
        cout << "\n1.-MILLA\n";
        cout << "2.-YARDA\n";
        cout << "3.-PIE\n";
        cout << "4.-PULGADA\n";
        cout << "\nElige A QUE quieres convertir (#): ";
        cin >> res2;
        cout << "\033[2J\033[0;0H";

        switch (res){
          case 1:
            if(res2==1){
              polR=pol;
              uni2 = "mi (millas) ";
            }else if(res2==2){
              polR=pol*1760;
              uni2 = "yd (yardas) ";
            }else if(res2==3){
              polR=pol*5280;
              uni2 = "ft (pies) ";
            }else if(res2==4){
              polR=pol*63360;
              uni2 = "in (pulgadas) ";
            }else{
              cout << "\nEl numero ingresado no esta en la lista de las unidades a convertir (M21)";
            }
          uni1 = "mi (millas) ";
          break;
          case 2:
            if(res2==1){
              polR=pol/1760;
              uni2 = "mi (millas) ";
            }else if(res2==2){
              polR=pol;
              uni2 = "yd (yardas) ";
            }else if(res2==3){
              polR=pol*3;
              uni2 = "ft (pies) ";
            }else if(res2==4){
              polR=pol*36;
              uni2 = "in (pulgadas) ";
            }else{
              cout << "\nEl numero ingresado no esta en la lista de las unidades a convertir (M22)";
            }
          uni1 = "yd (yardas) ";
          break;
          case 3:
            if(res2==1){
              polR=pol/5280;
              uni2 = "mi (millas) ";
            }else if(res2==2){
              polR=pol/3;
              uni2 = "yd (yardas) ";
            }else if(res2==3){
              polR=pol;
              uni2 = "ft (pies) ";
            }else if(res2==4){
              polR=pol*12;
              uni2 = "in (pulgadas) ";
            }else{
              cout << "\nEl numero ingresado no esta en la lista de las unidades a convertir (M23)";
            }
          uni1 = "ft (pies) ";
          break;
          case 4:
            if(res2==1){
              polR=pol/63360;
              uni2 = "mi (millas) ";
            }else if(res2==2){
              polR=pol/36;
              uni2 = "yd (yardas) ";
            }else if(res2==3){
              polR=pol/12;
              uni2 = "ft (pies) ";
            }else if(res2==4){
              polR=pol;
              uni2 = "in (pulgadas) ";
            }else{
              cout << "\nEl numero ingresado no esta en la lista de las unidades a convertir (M24)";
            }
          uni1 = "in (pulgadas) ";
          break;
          default:
            cout << "\nEl numero ingresado no esta en la lista de las unidades a convertir (M1)";
          break;
        }
        if(res2==1 || res2==2 || res2==3 || res2==4){
          cout << endl << pol << uni1 << "equivalen a " << polR << uni2 << endl;
        }
      }else{
        cout << "\nEl numero ingresado no esta en la lista de las unidades a convertir (M0)";
      }
    break;
    default:
      cout << "El numero ingresado no es valido\n";
    break;
  }
  return 0;
}
