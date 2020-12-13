// Miguel Angel Ruiz    17/11/2016  Rombo
#include<iostream>
using namespace std;


void leerDatos(unsigned& altura){
    do{
        cout << "Introduzca la altura: ";
            cin >> altura;
    }while(altura<=0);
}
//  ---------------------ZONA SUPERIOR------------------------
void escribirBlancosSuperior(unsigned altura, unsigned fila){
    for (unsigned blancos=altura; blancos>fila; blancos--){
        cout << " ";
    }
}
void escribirSuperior(unsigned fila){
    for (unsigned asterisco=1; asterisco<=fila; asterisco++){
            cout << "*";
            cout << " ";
    }
}
void imprimirTrianguloSuperior(unsigned altura, unsigned fila){
    for (unsigned fila=1; fila<=altura; fila++){
        escribirBlancosSuperior(altura, fila);
        escribirSuperior(fila);
        cout << endl;
    }
}
//-----------------------ZONA INFERIOR------------------------
void escribirBlancosInferior(unsigned fila){
    for (unsigned blancos=1; blancos<fila+1; blancos++){
        cout << " ";
    }
}
void escribirInferior (unsigned altura, unsigned fila){
    for (unsigned asterisco=altura; asterisco>fila; asterisco--){
            cout << "*";
            cout << " ";
    }
}
void imprimirTrianguloInferior(unsigned altura, unsigned fila){
    for (unsigned fila=1; fila<altura; fila++){
        escribirBlancosInferior(fila);
        escribirInferior(altura, fila);
        cout << endl;
    }
}
//---------------------UNION-------------------
void imprimirRombo(unsigned fila, unsigned altura){
    imprimirTrianguloSuperior(altura, fila);
    imprimirTrianguloInferior(altura, fila);
}

int main(){
    unsigned altura, fila;
    leerDatos(altura);
    imprimirRombo(fila, altura);

return 0;
}
