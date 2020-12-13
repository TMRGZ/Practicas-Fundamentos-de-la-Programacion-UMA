//Miguel Angel Ruiz     22/12/2016

#include <iostream>
using namespace std;

const unsigned N=2;
typedef unsigned Cuadrado[N][N];

void leerMatriz(Cuadrado& A){
    for(unsigned fil=0; fil<N; fil++){
        for(unsigned col=0; col<N; col++){
            cin >> A[fil][col];
        }
    }
}
bool Es_Magica(const Cuadrado& A){
    int sumafilas=0, sumacolumnas=0, sumadiagonal1=0, sumadiagonal2=0;
    unsigned fil=0, col=0;

    for(unsigned i=0; i<N; i++){
        sumadiagonal1=sumadiagonal1+A[i][i];
        sumadiagonal2=sumadiagonal2+A[i][N-1-i];

    }if(sumadiagonal1!=sumadiagonal2){
        return false;
    }
    while(fil<N){
        while(col<N){
            sumacolumnas=sumacolumnas+A[col][fil];
            sumafilas=sumafilas+A[fil][col];
            col++;
        }
        if(sumacolumnas!=sumadiagonal1||sumafilas!=sumadiagonal1){
            return false;
        }else{
            sumacolumnas=0;
            sumafilas=0;
        }
    fil++;
    col=0;
    }
return true;
}




int main(){
    Cuadrado A;
    bool compr;

    leerMatriz(A);
    compr = Es_Magica(A);
        if(compr){
            cout << "La matriz es magica";
        }else{
            cout << "No es magica";
        }

return 0;
}
