#include<iostream>
using namespace std;

int sumar(int paco, int juan){//Funci�n con paso de par�metros por valor
    int r;
    r=paco+juan;
    return(r);//Regresa la variable "r" como valor ENTERO
}

void resta(int a, int b){ //Funcion con paso de par�metros por valor
    cout<<"La resta es: "<<a-b<<endl; //NO REGRESA ningun valor (VOID)
}
/*int mult(){//Funcion sin paso de par�metros
    int a=10,b=8;//Variables locales a "mult"
    return(a*b);//Regresa una expresi�n.
}*/


int main(){
    int a,b;
    resta(50,6);
    cout << "\033[2J\033[0;0H";
    cout<<"Dame A: "; cin>>a;
    cout<<"Dame B: "; cin>>b;
    cout<<"La funcion sumar de a+b es: "<<sumar(a,b)<<endl;
    cout<<"La funcion sumar compleja es: "<<sumar(a+10,sumar(10,20))<<endl;
    cout<<"La funcion sumar de 5+10 es: "<<sumar(5,10)<<endl;
    resta(50,6);
}

