#include<iostream>
using namespace std;
int nJ=2;
int i,j;

void ordenarArray(int a[nJ][3]){
  int aux_elem;
  for(int k=0;k<nJ;k++){//cambia a la siguiente fila
    for (i=0;i<nJ;i++){//Una vez concluido de recorrer, lo vuelve hacer con la posicion de enmedio
        for (j=1;j<3;j++){//Recorre Fila
            //cout << tiradaOrdenada[k][j] << endl;
            if (a[k][j]<a[k][j-1]){   // si el elemento anterior es mayor, hacemos el cambio
                aux_elem = a[k][j];
                //cout << "AUX:" << aux_elem << endl;
                a[k][j] = a[k][j-1];
                a[k][j-1] = aux_elem;
            }
        }
    }
  }
}

 void mostrarArray(int a[nJ][3]){
     for(i=0;i<nJ;i++){
      for(j=0;j<3;j++){
          cout << a[i][j] << " ";
      }
      cout << endl;
  } 
}

int main(){
  int n=3;
  int aa[2][3]={{6,6,2},{5,4,1}};
  mostrarArray(aa);
  ordenarArray(aa);
  mostrarArray(aa);
}

