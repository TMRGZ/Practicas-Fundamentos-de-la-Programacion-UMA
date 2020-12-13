#include<iostream>
using namespace std;

void leerNumeroDiscos(unsigned& discos){
    do{
        cout << "Introduzca numero discos: ";
            cin >> discos;
    }while(discos==0);
}

int main(){
    unsigned discos;
    leerNumeroDiscos(discos);

    cout << "para " << discos << " discos se necesitan los movimientos:" << endl;

    mueve (discos, izquierdo, central, derecho);


    return 0;
}
