/*
 * Salvador Murillo Arias
 * Practica 3: Area y volumen de un cono.
 */

#include <iostream>
#include <cmath>
//#define _USE_MATH_DEFINES
# define M_PI 3.14159265358979323846  /* pi */
using namespace std;

int main() {
    double radio, altura, volumen, aTotal, aLateral, generatriz ;
    cout << "\033[2J\033[0;0H";
    cout << "Este programa te calcula el area y volumen de un cono, a partir del radio y altura" <<endl;
    cout << "Ingresa el radio del cono: "; cin >> radio;
    cout << "Ingresa la altura del cono: "; cin >> altura;

    //Calcular Area
    generatriz = sqrt(pow(radio,2)+ pow(altura,2));
    cout << "\nLa generatriz es: " << generatriz<<endl;
    aLateral = M_PI * radio * generatriz;
    aTotal = M_PI * radio * (generatriz + radio);

    //Calcular Volumen
    volumen = (M_PI*pow(radio, 2)*altura)/3;
    cout << "\nEl area del cono es: " << aTotal << " metros cuadrados.";
    cout << "\nEl volumen del cono es: " << volumen << " metros cubicos.\n" ;

    return 0;
}
