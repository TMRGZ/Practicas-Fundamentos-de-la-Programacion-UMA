// Miguel Angel Ruiz    17/11/2016  Numero Primo
#include<iostream>
using namespace std;


unsigned leerDatos(){
    unsigned n;
    do{
        cout << "Introduzca un numero: ";
            cin >> n;
    }while(n<0);
    return n;
}
bool esPrimo(unsigned num){
    unsigned divisor=2;

    while ((divisor<num)&&(num%divisor!=0)){
        divisor++;
    }return divisor>=num;
}
void imprimirPrimo(unsigned num){
    unsigned contador=0;
    unsigned comprobar=2;

    while (contador<num){
        if(esPrimo(comprobar)){
            cout << comprobar << ", ";
            contador++;
        }
        comprobar++;
    }
}
int main(){
    unsigned num;
    num=leerDatos();
    imprimirPrimo(num);

return 0;
}
