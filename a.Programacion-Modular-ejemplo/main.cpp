#include <iostream>
using namespace std;

void menu(){
	cout << "\t\tSUMA DE NUMEROS\n";
}

void suma(){
	int a,b;
	cout << "Dame a: "; cin >> a;
	cout << "Dame b: "; cin >> b;
	cout << "La suma es: " << a+b;
}

int main(){
	menu();
	suma();
}

