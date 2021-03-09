/*FUNDAMENTOS DE PROGRAMACION
  Proyecto Final - Casino Virtual
  Salvador Murillo Arias
*/
// cout << "\033[2J\033[0;0H";
#include <iostream>
#include <string>
#include <random>   //Crear numeros aleatorios
using namespace std;
#define MAXJUGADORES 4
#define MAXTIRADAS 3
//VARIABLES GLOBALES
int i,j,nJ,posG=0, posP[3], posE[3], dineroPool=0, contarResp=0, dineroAposGral=0;

string nombreJugador[MAXJUGADORES];
int dineroJugador[MAXJUGADORES];
int dineroApostado[MAXJUGADORES];
int tiradaDados[MAXJUGADORES][3];
int tiradaOrdenada[MAXJUGADORES][3];
string enter = "";


//FUNCIONES
void welcomePage(){//Pantalla Inicio
    cout << "\033[2J\033[0;0H";
    cout << " .o88b.  .d8b.  .d8888. d888888b d8b   db  .d88b. \n"  
         << "d8P  Y8 d8' `8b 88'  YP   `88'   888o  88 .8P  Y8.\n" 
         << "8P      88ooo88 `8bo.      88    88V8o 88 88    88\n" 
         << "8b      88~~~88   `Y8b.    88    88 V8o88 88    88\n"
         << "Y8b  d8 88   88 db   8D   .88.   88  V888 `8b  d8'\n" 
         << " `Y88P' YP   YP `8888Y' Y888888P VP   V8P  `Y88P' \n"
         << "       db    db d888888b d8888b. d888888b db    db  .d8b.  db     \n"      
         << "       88    88   `88'   88  `8D `~~88~~' 88    88 d8' `8b 88     \n"
         << "       Y8    8P    88    88oobY'    88    88    88 88ooo88 88     \n"
         << "       `8b  d8'    88    88`8b      88    88    88 88~~~88 88     \n"
         << "        `8bd8'    .88.   88 `88.    88    88b  d88 88   88 88booo.\n"
         << "          YP    Y888888P 88   YD    YP    ~Y8888P' YP   YP Y88888P\n"
         << "\n             \t\t\t\t\t\033[1;33mpor Chava | Murillo \033[0m\n\n\n";                                                           
}

int actualizarJugadores(int dineroJugador[nJ], int nJ){
    int resp[nJ];
    contarResp=0;

    for(i=0;i<nJ;i++){
        if(dineroJugador[i]>0){
            cout << "\nJ" << i+1 << " Tienes $" << dineroJugador[i] << " para seguir jugando";
            cout << "\nJ" << i+1 << " Deseas continuar? 1-SI 2-NO : ";
            cin >> resp[i];
        }else if(dineroJugador[i]==0){
            cout << "\nJ" << i+1 << " Ya no tienes dinero para continuar.\n";
        }
    }

    for(i=0;i<nJ;i++){
        if(resp[i]==1){
            contarResp=contarResp+1;
        }else if(resp[i]==2){
            contarResp=contarResp;
        }
    }
    return contarResp;
}

void dadosAscii(int num){//Dados en ASCII
    switch (num)
    {
    case 1:
        cout << "************\n"
             << "*    OO    *\n"
             << "*   O O    *\n"
             << "*     O    *\n"
             << "*     O    *\n"
             << "*   OOOOO  *\n"
             << "************\n";
        break;
    case 2:
        cout << "************\n"
             << "*   OOOO   *\n"
             << "*  O   O   *\n"
             << "*     O    *\n"
             << "*    O     *\n"
             << "*  OOOOOO  *\n"
             << "************\n";
        break;
    case 3:
        cout << "************\n"
             << "*  OOOOO   *\n"
             << "*      O   *\n"
             << "*    OOO   *\n"
             << "*      O   *\n"
             << "*  OOOOO   *\n"
             << "************\n";
        break;
    case 4:
        cout << "************\n"
             << "*  O    O  *\n"
             << "*  O    O  *\n"
             << "*  OOOOOO  *\n"
             << "*       O  *\n"
             << "*       O  *\n"
             << "************\n";
        break;
    case 5:
        cout << "************\n"
             << "*  OOOOOO  *\n"
             << "*  O       *\n"
             << "*  OOOOOO  *\n"
             << "*       O  *\n"
             << "*  OOOOOO  *\n"
             << "************\n";
        break;
    case 6:
        cout << "************\n"
             << "*   OO     *\n"
             << "*  O       *\n"
             << "*  OOOOO   *\n"
             << "*  O    O  *\n"
             << "*  OOOOOO  *\n"
             << "************\n";
        break;
    }
}

int numDado(){ //Genera numero de dado
    random_device rd;  // Obtiene un # random del dispositivo
    mt19937 gen(rd()); // Generador de numeros (Merssene Twister Algoritmo)
    uniform_int_distribution<> nDado(1,6); //Define rango de numeros
    return nDado(gen);
}

int numJugadores(){//Obtiene numero de jugadores
    cout << "Selecciona el numero de jugadores [2 a 4]: ";
    cin >> nJ;
    while (nJ<2||nJ>4)
    {
        cout << "Numero No valido\n";
        cout << "Selecciona el numero de jugadores [2 a 4]: ";
        cin >> nJ;
    }
    return nJ;
}

void getDatos(){//Pide Nombre y Deposito Jugador
    for (i=0; i<nJ;i++){
        cout << "\033[2J\033[0;0H";
        welcomePage();
        cout << "\nJugador #" << i+1 << endl;
        cout << "Ingresa Nombre: ";
        cin >> nombreJugador[i];
        cout << "Cuanto quieres depositar $";
        cin >> dineroJugador[i];
        getline(cin,enter);
        cout << "Presione Enter para continuar";
        getline(cin,enter);
    }
    cout << endl;
}

void tiradaJugador(){//Muestra y guarda numeros de Jugador, pide cantidad a apostar

    for(i=0;i<nJ;i++){
        //CONDICION QUE CHEQUE SI JUGADOR JUEGA O NO
        cout << "\033[2J\033[0;0H";
        cout << "Tirada de dados\n";
        cout << "Jugador #" << i+1 << ": " << nombreJugador[i] << endl;
        for(j=0;j<3;j++){
            tiradaDados[i][j]=numDado();
            tiradaOrdenada[i][j]=tiradaDados[i][j];
            dadosAscii(tiradaDados[i][j]);
        }
        if(dineroJugador[i]>0){
            do{
                dineroApostado[i]=0;
                cout << "Ingresa monto de Apuesta $";
                cin >> dineroApostado[i];
                if(dineroApostado[i]>dineroJugador[i]){
                    cout << "El monto excede el dinero del jugador\n";
                }
            }while(dineroApostado[i]>dineroJugador[i]);
        }else{
            cout << "El jugador no tiene fondos";
        }
        getline(cin,enter);
        cout << "\033[2J\033[0;0H";
        cout << "Presione Enter para continuar";
        getline(cin,enter);
    }
}

void mostrarTiradas(){
    cout << "\033[2J\033[0;0H";
    welcomePage();
    dineroPool>0 ? cout << "POOL $" << dineroPool << "\n\n" : cout << endl;
    for(i=0;i<nJ;i++){
        cout << "J" << i+1 << ": "  << nombreJugador[i] << " Aposto $" << dineroApostado[i] << "\nTiradas: ";
        for(j=0;j<3;j++){
            cout << tiradaDados[i][j] << " ";
        }
        if(posG==4){
            cout << "| Empato (PERDIENDO) $" << dineroApostado[i] << "\n\n";
        }else if(i==0 && posG==0){
            cout << "| Gano $" << dineroAposGral << "\n\n";
        }else if(i==1 && posG==1){
            cout << "| Gano $" << dineroAposGral << "\n\n";
        }else{
            cout << "| Perdio $" << dineroApostado[i] << "\n\n";
        }
    }
}

void ordenarArray(int tiradaOrdenada[nJ][3]){
  int aux_elem;
  for(int k=0;k<nJ;k++){//cambia a la siguiente fila
    for (i=0;i<nJ;i++){//Una vez concluido de recorrer, lo vuelve hacer con la posicion de enmedio
        for (j=1;j<3;j++){//Recorre Fila
            //cout << tiradaOrdenada[k][j] << endl;
            if (tiradaOrdenada[k][j]<tiradaOrdenada[k][j-1]){   // si el elemento anterior es mayor, hacemos el cambio
                aux_elem = tiradaOrdenada[k][j];
                //cout << "AUX:" << aux_elem << endl;
                tiradaOrdenada[k][j] = tiradaOrdenada[k][j-1];
                tiradaOrdenada[k][j-1] = aux_elem;
            }
        }
    }
  }
}

void tiradasNOascii(){
  for(i=0;i<nJ;i++){
      for(j=0;j<3;j++){
          cout << tiradaDados[i][j] << " ";
      }
      cout << endl;
  } 
}

int ckTriple(int vT[nJ], int cont[nJ], int &mayorT){
    int contador=0;
    mayorT=vT[0];
    for(i=0;i<nJ;i++){
        if(cont[i]==3 && mayorT<vT[i]){
           mayorT=vT[i];     
        }
        if(cont[i]==3 && mayorT==vT[i]){
            contador=contador+1;     
        }
    }
    return contador;
}

int ckDoble(int vD[nJ], int cont[nJ], int &mayorD){
    int contador=0;
    mayorD=vD[1];
    for(i=0;i<nJ;i++){
        if(cont[i]==2 && mayorD<vD[i]){
           mayorD=vD[i];     
        }
        if(cont[i]==2 && mayorD==vD[i]){
            contador=contador+1;     
        }
    }
    return contador;
}

int ckSuma(int vS[nJ], int cont[nJ], int &mayorS){
    int contador=0;
    mayorS=vS[0];
    for(i=0;i<nJ;i++){
        if(cont[i]==1 && mayorS<vS[i]){
           mayorS=vS[i];     
        }else if(cont[i]==1 && mayorS==vS[i]){
            contador=contador+1;     
        }
    }
    return contador;
}

void resultados(int posG, int posP[3], int posE[3], int dineroJugador[nJ], int &dineroPool, int &dineroAposGral){
   
    switch (nJ){
    case 2:

        dineroAposGral=dineroApostado[0]+dineroApostado[1]+dineroPool;
        dineroJugador[0]=dineroJugador[0]-dineroApostado[0];
        dineroJugador[1]=dineroJugador[1]-dineroApostado[1];

        if(posG==4){
            dineroPool=dineroPool+dineroAposGral;
        }else if(posG!=4){
            if(posP[0]==0){
                dineroJugador[1]=dineroJugador[1]+dineroAposGral;
                dineroPool=0;
            }else if(posP[1]==0){
                dineroJugador[0]=dineroJugador[0]+dineroAposGral;
                dineroPool=0;
            }
        }
        break;
    case 3:
        break;
    case 4:
        break;
    }
}

void calcularGanador(int a[nJ][3]){
    int valor1, valor2, sumaA[nJ], vDoble[nJ], vSDoble[nJ], vTriple[nJ];
    int mayorS=0, mayorD=0, mayorT=0, posS=0, posD=0, posT=0, cont[nJ], c[3];

    //Obtener valores para determinar ganador
    for (i=0;i<nJ;i++){
        valor1=0;
        valor2=0;
        sumaA[i]=0;
        for(j=0;j<3;j++){
            if((i==0 || i==1 || i==2 || i==3)&& j==0){
                valor1=a[i][j];
                sumaA[i]=valor1;
            }else if(j==1){
                if(valor1!=a[i][j]){
                    //SUMA
                    sumaA[i]=sumaA[i]+a[i][j];
                    valor2=a[i][j];
                }else if(valor1==a[i][j]){
                    valor2=a[i][j];
                }
            }else if(j==2){
                if(valor1==a[i][j] && valor2==a[i][j]){
                    //TRIPLE
                    vTriple[i]=valor1;
                    cont[i]=3;
                    vDoble[i]=0;
                    vSDoble[i]=0;
                    sumaA[i]=0;               
                }else if(valor1==a[i][j] && valor2!=a[i][j]){//CUMPLE
                    //DOBLE
                    vSDoble[i]=valor2;//3
                    vDoble[i]=valor1;//5
                    cont[i]=2;
                    sumaA[i]=0;
                    vTriple[i]=0;
                }else if(valor1!=a[i][j] && valor2==a[i][j]){
                    //DOBLE
                    vSDoble[i]=valor1;
                    vDoble[i]=valor2;
                    cont[i]=2;
                    sumaA[i]=0;
                    vTriple[i]=0;
                }else if(valor1!=a[i][j] && valor2!=a[i][j]){
                    if(valor1==valor2){
                        //DOBLE
                        vSDoble[i]=a[i][j];
                        vDoble[i]=valor2;
                        cont[i]=2;
                        sumaA[i]=0;
                        vTriple[i]=0;
                    }else{
                        //SUMA
                        sumaA[i]=sumaA[i]+a[i][j];
                        cont[i]=1;
                        vSDoble[i]=0;
                        vTriple[i]=0;
                    }
                }
            }
        }
    }

    //Contar sencillos, dobles o triples
    c[0]=0, c[1]=0, c[2]=0;
    for(i=0; i<nJ; i++){
        if(cont[i]==1){
            c[0]=c[0]+1;
        }else if(cont[i]==2){
            c[1]=c[1]+1;
        }else if(cont[i]==3){
            c[2]=c[2]+1;
        }
    }

    switch (nJ){
    case 2:
        if(c[0]==0 && c[1]==0 && c[2]==2){
            int conT=0;
            conT=ckTriple(vTriple,cont,mayorT);
            if(conT==1){
                for(i=0;i<2;i++){
                    mayorT==vTriple[i] ? posG=i : posP[0]=i;
                }
            }else if(conT==2){
                posG=4;
                posE[0]=0;
                posE[1]=1;
            }
        }else if(c[0]==0 && c[1]==2 && c[2]==0){
            int conD=0;
            conD=ckDoble(vDoble,cont,mayorD);
            if(conD==1){
                for(i=0;i<2;i++){
                    mayorD==vDoble[i] ? posG=i : posP[0]=i;
                }
            }else if(conD==2){
                if(vSDoble[0]<vSDoble[1]){
                    posG=1;
                    posP[0]=0;
                }else if(vSDoble[0]>vSDoble[1]){
                    posG=0;
                    posP[0]=1;
                }else if(vSDoble[0]==vSDoble[1]){
                    posG=4;
                    posE[0]=0;
                    posE[1]=1;
                }
            }
        }else if(c[0]==2 && c[1]==0 && c[2]==0){
            int conS=0;
            conS=ckSuma(sumaA,cont,mayorS);
            if(conS==1){
                for(i=0;i<2;i++){
                    mayorS==sumaA[i] ? posG=i : posP[0]=i;
                }
            }else if(conS==2){
                posG=4;
                posE[0]=0;
                posE[1]=1;
            }
        }else if(c[0]==0 && c[1]==1 && c[2]==1){
            for(i=0;i<2;i++){
                cont[i]==3 ? posG=i : posP[0]=i;
            }
        }else if(c[0]==1 && c[1]==1 && c[2]==0){
            for(i=0;i<2;i++){
                cont[i]==2 ? posG=i : posP[0]=i;
            }
        }else if(c[0]==1 && c[1]==0 && c[2]==1){
            for(i=0;i<2;i++){
                cont[i]==3 ? posG=i : posP[0]=i;
            }
        }
        break;
    case 3:
        break;
    case 4:
        break;
    }
    /*
    switch (nJ){
    case 2:
       if(cont[0]==1 && cont[1]==1){
           if(sumaA[0]<sumaA[1]){
                posG=1;
                posP[0]=0;
            }else if(sumaA[0]>sumaA[1]){
                posG=0;
                posP[0]=1;
            }else if(sumaA[0]==sumaA[1]){
                posG=4;
                posE[0]=0;
                posE[1]=1;
            } 
       }else if(cont[0]==1 && cont[1]==2){
           posG=1;
           posP[0]=0;
       }else if(cont[0]==1 && cont[1]==3){
           posG=1;
           posP[0]=0;
       }else if(cont[0]==2 && cont[1]==1){
           posG=0;
           posP[0]=1;
       }else if(cont[0]==2 && cont[1]==2){
            if(vDoble[0]<vDoble[1]){
                posG=1;
                posP[0]=0;
            }else if(vDoble[0]>vDoble[1]){
                posG=0;
                posP[0]=1;
            }else if(vDoble[0]==vDoble[1]){
                if(vSDoble[0]<vSDoble[1]){
                    posG=1;
                    posP[0]=0;
                }else if(vSDoble[0]>vSDoble[1]){
                    posG=0;
                    posP[0]=1;
                }else if(vSDoble[0]==vSDoble[1]){
                    posG=4;
                    posE[0]=0;
                    posE[1]=1;
                }
            }     
       }else if(cont[0]==2 && cont[1]==3){
           posG=1;
           posP[0]=0;
       }else if(cont[0]==3 && cont[1]==1){
           posG=0;
           posP[0]=1;
       }else if(cont[0]==3 && cont[1]==2){
           posG=0;
           posP[0]=1;
       }else if(cont[0]==3 && cont[1]==3){
           if(vTriple[0]<vTriple[1]){
               posG=1;
               posP[0]=0;
           }else if(vTriple[0]>vTriple[1]){
               posG=0;
               posP[0]=1;
           }else if(vTriple[0]==vTriple[1]){
               posG=4;
               posE[0]=0;
               posE[1]=1;
           }
       }
       break;
    case 3:
        
       break;
    case 4:
       break;
    }
    */
    //cout << "\nvalor posg:" << posG << endl;
}

//FUNCION PRINCIPAL
int main(){
    int opc;
    welcomePage();
    numJugadores();
    getDatos();
    do{
        tiradaJugador();
        //ordenarArray(tiradaOrdenada);
        calcularGanador(tiradaDados);
        resultados(posG,posP,posE,dineroJugador,dineroPool,dineroAposGral);
        mostrarTiradas();

        if(posG>=0 && posG<4){
            cout << "\nGana J" << posG+1 << endl;
        }else if(posG==4){
            cout << "\nEmpate, dinero se va al POOL\n";
        }

        opc=actualizarJugadores(dineroJugador,nJ);
        (opc==1 || opc ==0) ? nJ=1 : nJ=opc;
    }while (nJ!=1);
    cout << "\nVUELVE PRONTO!\n";
}
