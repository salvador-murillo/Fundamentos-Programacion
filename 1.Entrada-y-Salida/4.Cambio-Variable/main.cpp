/*
 * Salvador Murillo Arias
 * Practica 4: Cambio de Variables.
 */

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num_ch, resp_user;
    do {
        cout << "\033[2J\033[0;0H";
        cout << "Este programa te intercambia los valores que ingresas" <<endl;
        cout << "Ingresa el valor de A: "; cin >> num1;
        cout << "Ingresa el valor de B: "; cin >> num2;
        num_ch = num1;
        num1 = num2;
        num2 = num_ch;
        cout << "\nEl valor de A es: " << num1;
        cout << "\nEl valor de B es: " << num2;

        cout << "\nTe equivocaste? Intenta de nuevo\nResponde 1 para repetir o 0 para salir: ";
        cin >> resp_user;
    } while (resp_user == 1);

    return 0;
}
