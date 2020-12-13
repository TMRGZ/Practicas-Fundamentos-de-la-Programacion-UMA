// Miguel Angel Ruiz    17/11/2016  Piramide de numeros
#include<iostream>
using namespace std;


void leerDatos(unsigned& altura){
    do{
        cout << "Introduzca la altura: ";
            cin >> altura;
    }while((altura>9)||(altura<=0));
}
void escribirBlancos(unsigned altura, unsigned fila){
    for (unsigned blancos=altura; blancos>fila; blancos--){
        cout << " ";
    }
}
void escribirCreciente(unsigned altura, unsigned fila){
    for (unsigned creciente=1; creciente<=fila; creciente++){
        cout << creciente;
    }
}
void escribirDecreciente(unsigned altura, unsigned fila){
    for (unsigned decreciente=fila-1; decreciente>=1; decreciente--){
        cout << decreciente;
    }
}
void imprimirPiramide(unsigned altura, unsigned fila){
    for (unsigned fila=1; fila<=altura; fila++){
        escribirBlancos(altura, fila);
        escribirCreciente(altura, fila);
        escribirDecreciente(altura, fila);
        cout << endl;
    }
}
int main(){
    unsigned altura, fila;
    leerDatos(altura);
    imprimirPiramide(altura, fila);

return 0;
}
