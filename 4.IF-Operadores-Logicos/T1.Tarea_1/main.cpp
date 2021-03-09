/*FUNDAMENTOS DE PROGRAMACION
  Tarea 1: Edad al dia de hoy
  Salvador Murillo Arias
*/

#include <iostream>
using namespace std;
int main() {
    int diaN, mesN, anioN, diaA, mesA, anioA, diaR, mesR,anioR;
    cout << "\033[2J\033[0;0H";
    cout << "\tIngresa FECHA DE NACIMIENTO\nDia:";
    cin >> diaN; cout << "Mes:"; cin >> mesN; cout << "Anio:"; cin >> anioN;
    cout << "\n\tIngresa FECHA ACTUAL\nDia:";
    cin >> diaA; cout << "Mes:"; cin >> mesA; cout << "Anio:"; cin >> anioA;
    
    anioR = anioA-anioN;
    diaR = 0;
    mesR = 0;
    if (diaA >=1 && diaA <31 && mesA >=1 && mesA <=12){
        if(mesA-mesN==1 && diaA<diaN){
            mesR=0;
            if (mesA==1 || mesA==3|| mesA==5 || mesA==7|| mesA==8 || mesA==10 || mesA==12){
                diaR=31-diaN+diaA;
            }else if (mesA==4 || mesA==6|| mesA==9 || mesA==11){
                diaR=30-diaN+diaA;
            }else if (mesA==2){
                diaR=28-diaN+diaA;
            }
        }else if(mesN-mesA==1 && diaA<diaN){
            mesR=12-mesN+mesA;
            anioR=anioR-1;
            if (mesA==1 || mesA==3|| mesA==5 || mesA==7|| mesA==8 || mesA==10 || mesA==12){
                diaR=diaA;
            }else if (mesA==4 || mesA==6|| mesA==9 || mesA==11){
                diaR=diaA;
            }else if (mesA==2){
                diaR=diaA;
            }
        }else if (mesA>mesN && diaA>=diaN){
            mesR=mesA-mesN;
            diaR=diaA-diaN;
        }else if (mesA<=mesN && diaA<=diaN){
            mesR=12-mesN+mesA;
            anioR=anioR-1;
            if (mesA==1 || mesA==3|| mesA==5 || mesA==7|| mesA==8 || mesA==10 || mesA==12){
                diaR=31-diaN+diaA;
            }else if (mesA==4 || mesA==6|| mesA==9 || mesA==11){
                diaR=30-diaN+diaA;
            }else if (mesA==2){
                diaR=28-diaN+diaA;
            }
        }else if (mesA>=mesN && diaA<=diaN){
            mesR=mesA-mesN;
            if (mesA==1 || mesA==3|| mesA==5 || mesA==7|| mesA==8 || mesA==10 || mesA==12){
                diaR=31-diaN+diaA;
            }else if (mesA==4 || mesA==6|| mesA==9 || mesA==11){
                diaR=30-diaN+diaA;
            }else if (mesA==2){
                diaR=28-diaN+diaA;
            }
        }else if (mesA<=mesN && diaA>=diaN){
            mesR=12-mesN+mesA;
            anioR=anioR-1;
            diaR=diaA-diaN;
        }
        
        cout << "\nTu edad es:" << anioR << " anios con " << mesR << " mes(es) y " << diaR << " dia(s)\n";
    }else{
        cout << "\nLa fecha actual ingresada no es valida.\n";
    }
        
    return 0;
}
