// Miguel Angel Ruiz    17/11/2016
#include<iostream>
using namespace std;


void leerNumero(unsigned& numero){
    do{
        cout << "Introduzca un numero: ";
            cin >> numero;
            if(numero%2!=0){
                throw;
            }
    }while(numero<0);
}
float calcularFraccion(unsigned numero, unsigned j){
    float suma=1, numerador, denominador, division;

    for(unsigned i=2; i<=j; i+=2){
        numerador=i;
        denominador=i-1;
        division = numerador/denominador;
        suma=division*suma;
    }
    return suma;
}
float calcularFinal (unsigned numero){
    float sumafracciones=0;

    for (unsigned j=2; (j<=numero)&&(calcularFraccion(numero,j)<=5); j+=2){
        sumafracciones=sumafracciones+calcularFraccion(numero, j);
    }
    cout << sumafracciones;
    return sumafracciones;
}

int main(){
    unsigned numero, j;

    leerNumero(numero);
    calcularFinal(numero);

    return 0;
}
