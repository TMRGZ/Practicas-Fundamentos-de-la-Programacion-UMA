//Miguel Angel Ruiz     22/12/2016

#include <iostream>
using namespace std;

const unsigned N=2;
typedef int TMatriz [N][N];

void leerMatriz(TMatriz& m){
    for(unsigned fila=0; fila<N; fila++){
        for(unsigned columna=0; columna<N; columna++){
            cin >> m[fila][columna];
        }
    }
}
bool esSimetrica(const TMatriz& m){
    bool comp= true;
    unsigned fil=0, col=0;

    while((fil<N)&&(comp)){
        while((col<N)&&(comp)){
            if(m[col][fil]!=m[fil][col]){
                comp=false;
            }
         col++;
        }

    fil++;
    col=0;
    }
return comp;
}


int main(){
    TMatriz m;
    bool simetrica;

    cout << "Introduzca los datos de la matriz: " << endl;

    leerMatriz(m);
    simetrica=esSimetrica(m);

    if(simetrica){
        cout << "La matriz es simetrica";
    }else{
        cout << "No es simetrica";
    }

return 0;
}
