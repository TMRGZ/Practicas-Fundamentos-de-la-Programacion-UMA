// Miguel Angel Ruiz    17/11/2016  Potencia
#include<iostream>
using namespace std;


void leerExponente(float& exponente){
    do{
        cout << "Introduzca un exponente: ";
            cin >> exponente;
    }while(exponente<0);
}
float calculoFraccion(float exponente){
    float fraccion = 0;
    float potencia = 1;

    for (unsigned numerador=1; numerador<=exponente; numerador++){
        potencia = potencia*2;
        fraccion = fraccion + (numerador/potencia);
    }
    return fraccion;
}
void imprimirCalculo(float exponente){
    leerExponente(exponente);

    cout << "El resultado es: " << calculoFraccion(exponente);
}
int main(){
    float exponente;

    imprimirCalculo(exponente);

    return 0;
}
