// Miguel Angel Ruiz    17/11/2016  Piramide de numeros 2
#include<iostream>
using namespace std;


void leerDatos(unsigned& altura){
    do{
        cout << "Introduzca la altura: ";
            cin >> altura;
    }while(altura<=0);
}
void escribirBlancos(unsigned altura, unsigned fila){
    for (unsigned blancos=altura; blancos>fila; blancos--){
        cout << " ";
    }
}
void escribirPiramide(unsigned fila){
    for (unsigned creciente=fila; creciente<=(fila+fila-1); creciente++){
        cout << creciente%10;
    }
    for (unsigned decreciente=(fila+fila-2); decreciente>=fila; decreciente--){
        cout << decreciente%10;
    }
}
void imprimirPiramide(unsigned altura, unsigned fila){
    for (unsigned fila=1; fila<=altura; fila++){
        escribirBlancos(altura, fila);
        escribirPiramide(fila);
        cout << endl;
    }
}
int main(){
    unsigned altura, fila;
    leerDatos(altura);
    imprimirPiramide(altura, fila);

return 0;
}
