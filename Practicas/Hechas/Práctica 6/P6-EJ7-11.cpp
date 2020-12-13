//Miguel Angel Ruiz     15/12/16    Ej11
#include<iostream>
using namespace std;

const unsigned MAX=10;
typedef int TLista[MAX];

void iniciarArrays(TLista& lista1, TLista& lista2){
    for(unsigned i=0; i<MAX; i++){
        lista1[i]=0;
        lista2[i]=0;
    }
}

void leerArray(TLista& lista1){
    unsigned num;

    cout << "Introduzca los datos del array: " << endl;

    for(unsigned i=0; i<MAX; i++){
        cin >> num;
        lista1[num]++;
    }
}
void segundaLista(const TLista& lista1, TLista& lista2){
    for(unsigned i=0; i<MAX; i++){
        lista2[i]=lista1[i];
    }
}
void imprimirFrecuencias (const TLista& lista2, unsigned x){
    cout << "Lista 2: ";

    for(unsigned i=0; i<MAX; i++){
        if(x==lista2[i]){
            cout << i << " ";
        }
    }
}

int main(){
    TLista lista1;  TLista lista2;
    unsigned x;

    iniciarArrays(lista1, lista2);
    leerArray(lista1);

    cout << "Numero de veces que es necesario que se repita: ";
        cin >> x;

    segundaLista(lista1, lista2);
    imprimirFrecuencias(lista2, x);

return 0;
}
