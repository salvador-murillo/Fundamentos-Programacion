/*
 * Salvador Murillo Arias
 * Practica #2:  Manejo básico de Entrada - Salida
 */

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define WHITE   "\033[37m"      /* White */
#define CYAN    "\033[36m"      /* Cyan */

#include <iostream>
using namespace std;

int main() {
    char nombre[] = " ";
    int edad;
    cout << "Cual es tu nombre?"<<endl;
    cin >>nombre;
    cout << "Que edad tienes?"<<endl;
    cin >>edad;
    cout << YELLOW <<"       ´ ´ ´ ´"     <<endl;
    cout << WHITE  <<"       | | | |"     <<endl;
    cout << RED    <<"     @@@@@@@@@@@"   <<endl;
    cout << BLUE   <<"    {"<< WHITE <<"~"<< RED<<"@"<<
                               WHITE <<"~"<< RED<<"@"<<
                               WHITE <<"~"<< RED<<"@"<<
                               WHITE <<"~"<< RED<<"@"<<
                               WHITE <<"~"<< RED<<"@"<<
                               WHITE <<"~"<< BLUE<<"}" <<endl;
    cout << RED    <<"  @@@@@@@@@@@@@@@@@"   <<endl;
    cout << BLUE   <<"    {"<< WHITE <<"~"<< RED<<"@"<<
                               GREEN <<" HAPPY " <<
                               RED<<"@"<<
                               WHITE <<"~"<< BLUE<<"}" <<endl;
    cout << BLUE   <<"    {"<< CYAN  <<"    " << edad << BLUE << "     }" <<endl;
    cout << BLUE   <<"    {"<< GREEN <<"  BIRTHDAY "<< BLUE << "}"<<endl;
    cout << BLUE   <<"    {"<< CYAN  <<"   " << nombre << BLUE << "   }" <<endl;
    cout << RED    <<"  @@@@@@@@@@@@@@@@@"   <<endl;
    cout << MAGENTA  <<"       __) (__ " <<endl;
    cout << MAGENTA  <<"     / _______ \\ " <<endl;

    return 0;
}