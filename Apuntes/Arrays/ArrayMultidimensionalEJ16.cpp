#include<iostream>
using namespace std;

const unsigned MAX=3;
typedef int Tfila[MAX];
typedef Tfila Tmatriz[MAX];
typedef int Tmatriz [MAX][MAX];

void leermatriz(Tmatriz& m){
    cout << "Introduzca valores para una matriz de " << MAX << " x " << MAX << ": ";
    for (unsigned fi=0; fi<MAX; fi++){
        for(unsigned co=0; co<MAX; co++){
            cin >> m[fi][co];
        }
    }
}
int sumaDiagonal(const Tmatriz& m){
    int suma=0;
    for (unsigned i=0; i<MAX; i++){
        suma = suma+m[i][i];
    }
return suma;
}

int main(){
    int suma;
    Tmatriz a;

    leermatriz(a);
    suma=sumaDiagonal(a);
    cout << "La suma de la diagonal es: " << suma;

return 0;
}
