/*FUNDAMENTOS DE PROGRAMACION
  Practica 20: Mayor y Menor
  Salvador Murillo Arias
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    int vMin =0, vMax =0;
    cout << "\033[2J\033[0;0H";
    cout << "\nIngresa el 1er numero: "; cin >> a;
    cout << "\nIngresa el 2do numero: "; cin >> b;
    cout << "\nIngresa el 3er numero: "; cin >> c;
    cout << "\nIngresa el 4to numero: "; cin >> d;
    cout << "\nIngresa el 5to numero: "; cin >> e;
       
    cout << "\nDe los numeros: " << a << " " << b << " " << c << " " << d << " " << e;
    //Mayor
    if(a>=b && a>=c && a>=d && a>=e){
        vMax = a;
    }else if (b>=a && b>=c && b>=d && b>=e){
        vMax = b;
    }else if (c>=a && c>=b && c>=d && c>=e){
        vMax = c;
    }else if (d>=a && d>=b && d>=c && d>=e){
        vMax = d;
    }else if (e>=a && e>=b && e>=c && e>=d){
        vMax = e;
    }
    //Menor
    if(a<=b && a<=c && a<=d && a<=e){
        vMin = a;
    }else if (b<=a && b<=c && b<=d && b<=e){
        vMin = b;
    }else if (c<=a && c<=b && c<=d && c<=e){
        vMin = c;
    }else if (d<=a && d<=b && d<=c && d<=e){
        vMin = d;
    }else if (e<=a && e<=b && e<=c && e<=d){
        vMin = e;
    }
    
    cout << "\nEl mayor es " << vMax << "\nEl menor es " << vMin << "\nLa suma de ambos es " << (vMax+vMin) << "\n";
    return 0;
}
