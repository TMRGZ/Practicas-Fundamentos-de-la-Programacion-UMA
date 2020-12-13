//Miguel Angel Ruiz     22/12/2016

#include <iostream>
using namespace std;

const unsigned N=4;
const unsigned M=3;
typedef int TMatriz [N][M];

void leerMatriz(TMatriz& m){
    for(unsigned fila=0; fila<N; fila++){
        for(unsigned columna=0; columna<M; columna++){
            cin >> m[fila][columna];
        }
    }
}

void mayor(const TMatriz& m, int& maximo, unsigned& fila, unsigned& columna){
    maximo=m[0][0];

    for(unsigned fil=0; fil<N; fil++){
        for(unsigned col=0; col<M; col++){
            if((m[fil][col])>maximo){
                maximo=m[fil][col];
                fila=fil+1;
                columna=col+1;
            }
        }
    }
}

int main(){
    TMatriz m;
    int maximo;
    unsigned fila, columna;

    cout << "Introduzca elementos para una matriz de " << N << "x" << M << " elementos: ";

    leerMatriz(m);
    mayor(m, maximo, fila, columna);

    cout << "El elemento mayor es " << maximo << " y esta en la posicion " << fila << "x" << columna;


return 0;
}
