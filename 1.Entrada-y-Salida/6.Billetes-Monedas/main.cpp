/*
 * Salvador Murillo Arias
 * Practica 6: Billetes y Monedas.
 */

#include <iostream>
using namespace std;

int main() {

    int c_ing,c_res,b1000,b500,b200,b100,b50,b20,m10,m5,m2,m1;
    cout << "\033[2J\033[0;0H";
    cout << "Cuanto deseas retirar? "; cin >> c_ing;

    //Billetes
    b1000 = c_ing / 1000;
    c_res = c_ing % 1000;
    b500 = c_res / 500;
    c_res = c_res % 500;
    b200 = c_res / 200;
    c_res = c_res % 200;
    b100 = c_res / 100;
    c_res = c_res % 100;
    b50 = c_res / 50;
    c_res = c_res % 50;
    b20 = c_res / 20;
    c_res = c_res % 20;

    //Monedas
    m10 = c_res / 10;
    c_res = c_res % 10;
    m5 = c_res / 5;
    c_res = c_res % 5;
    m2 = c_res / 2;
    c_res = c_res % 2;
    m1 = c_res / 1;
    c_res = c_res % 1;

    cout << "\nDe acuerdo a $" <<c_ing << " se le entrega la siguiente cantidad:\n";
    cout << b1000 << " Billete (s) de $1000\n";
    cout << b500  << " Billete (s) de $500\n" ;
    cout << b200  << " Billete (s) de $200\n" ;
    cout << b100  << " Billete (s) de $100\n" ;
    cout << b50   << " Billete (s) de $50\n"  ;
    cout << b20   << " Billete (s) de $20\n"  ;
    cout << m10   << " Moneda (s) de $10\n"   ;
    cout << m5    << " Moneda (s) de $5\n"    ;
    cout << m2    << " Moneda (s) de $2\n"    ;
    cout << m1    << " Moneda (s) de $1\n"    ;

return 0;
}
