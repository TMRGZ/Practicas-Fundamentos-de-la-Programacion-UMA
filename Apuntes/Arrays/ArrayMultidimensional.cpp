#include<iostream>
using namespace std;

const unsigned FILA = 6;
const unsigned COLUMNAS = 8;

typedef int Tfila(FILA);
typedef int TColumna(COLUMNAS);


void leermatriz(Tmatriz& m){
    for (unsigned fi=0; fi<FILAS, fi++){
        for(unsigned co=0; co<COLUMNAS; co++){
            cin >> m[fi][co];
        }
    }
}
int sumarFila(const Tmatriz& m, unsigned f){
    int suma=0;
    for (unsigned i=0; i<COLUMNAS; i++){
        suma=suma+a[f][i];
    }
return suma;
}
int sumarCol(const Tmatriz& m; unsigned i){
    int suma=0;
    for(unsigned i=0; i<FILAS; i++){
        suma=suma+m[i][c];
    }
return suma;
}
void escribirFila(const Tfila& f){
    int suma=0;
    for(unsigned i=0; i<COLUMNAS; i++){
        cout << f[i];
    }
}
