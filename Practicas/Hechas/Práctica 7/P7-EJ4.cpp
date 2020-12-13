//Miguel Angel Ruiz     22/12/2016
#include <iostream>
using namespace std;
typedef unsigned TFilas[100];
typedef TFilas TMatriz[100];

void leerN(unsigned& n){
    cout << "Introduce el valor impar de N: ";

    do{
        cin >> n;

    }while(n%2==0);
}
void inicializacionMatriz(TMatriz& matriz, unsigned n){
    for(unsigned f=0; f<n; f++){
        for(unsigned c=0; c<n; c++){
            matriz[f][c]=0;
        }
    }
}
void crearMagico(TMatriz& matriz, unsigned n){
    unsigned fila=0, nfila, ncolumna;
    unsigned columna=unsigned(n/2);

    for(unsigned i=1; i<=n*n; i++){
        if(matriz[fila][columna]==0){
            matriz[fila][columna]=i;
        }else{
            fila++;
            matriz[fila][columna]=i;
        }

        nfila=fila;
        ncolumna=columna;

        if(columna==0){
            ncolumna=n-1;
        }else{
            ncolumna--;
        }

        if(fila==0){
            nfila=n-1;
        }else{
            nfila--;
        }
        if(matriz[nfila][ncolumna]==0){
            fila=nfila;
            columna=ncolumna;
        }else{
            fila++;
        }
    }
}
void imprimirMatriz(const TMatriz& matriz, unsigned n){
    for(unsigned f=0; f<n; f++){
        for(unsigned c=0; c<n; c++){
            cout <<"\t "<< matriz[f][c];
        }
    cout << endl;
  }
}
int main(){
    TMatriz matriz;
    unsigned n;

    leerN(n);
    inicializacionMatriz(matriz, n);
    crearMagico(matriz, n);
    imprimirMatriz(matriz, n);

return 0;
}
