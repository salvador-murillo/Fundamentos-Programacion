#include<iostream>
using namespace std;

void capARR(int g[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<"Dame el valor "<<i<<": ";
        cin>>g[i];
    }
}
void mostARR(int u[],int longitud){
    for(int i=0;i<longitud;i++){
        cout<<"El arreglo en su pos "<<i<<" es: "<<u[i]<<" \n";
    }
}

int main(){
    int siz;
    cout << "\033[2J\033[0;0H";
    cout<<"Dame el tamanio del arreglo: "; cin>>siz;
    int alumnos[siz];
    capARR(alumnos,siz);
    mostARR(alumnos,siz);


}

