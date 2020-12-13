#include<iostream>
using namespace std;

const unsigned MAX=10;
typedef int TMatriz[MAX][MAX];

struct TMatrizDin{
    TMatriz mat;
    unsigned tam;
};

void leerMatriz(TMatrizDin& m){
    for(unsigned fi=0; fi<m.tam; fi++){
        for(unsigned co=0; co<m.tam; co++){
            cin >> m.mat[fi][co];
        }
    }
}

unsigned minFila(const TMatriz& m, unsigned fila){
    int menor=m.mat[fila][0];
    unsigned col=0;

    for(unsigned j=1; j<m.tam; j++){
        if(m.mat[fila][j]<menor){
            menor=m.mat[fila][j];
            col=j;
        }
    }
return col;
}

unsigned maxCol(const TMatriz& m, unsigned col){
    unsigned fil;
    int mayor=m.mat[0][col];

    for(unsigned j=1; j<m.tam; j++){
        if(m.mat[j][col]>mayor){
            mayor=m.mat[j][col];
            fil=j;
        }
    }
return fil;
}

void puntoSilla(const TMatrizDin& m){
    unsigned fil, col;

    for(unsigned i=0; i<m.tam; i++){
        col=minFila(m, i);
        fil=maxCol(m, col);

        if(fil==i){
            cout << "(" << fil << "," << col << ") es un punto de silla";
        }
    }
}

int main(){
    TMatrizDin a;

    cout << "Introduzca la dimension de la matriz: ";
        cin >> a.tam;
    cout << "Introduzca la matriz fila a fila: ";
        leerMatriz(a);

    puntoSilla(a);


return 0;
}
