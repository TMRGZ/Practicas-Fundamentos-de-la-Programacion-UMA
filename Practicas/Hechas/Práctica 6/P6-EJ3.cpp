//Miguel Angel Ruiz     15/12/16    numeros repetidos
#include<iostream>
using namespace std;

const unsigned MAX=10;
typedef int TNumeros[MAX];

void iniciarArray(TNumeros& r){
    for(unsigned i=0; i<MAX; i++){
        r[i]= 0;
    }
}

void leerArray(TNumeros& r){
    int num = -1;
    cout << "Introducir numeros (Entre 0 y 9) en el array, para terminar introduce -1: "<< endl;

    do{
        r[num]++;
        do{
            cin >> num;

        }while(num>=10||num<-1);

    }while(num!=-1);
}

void imprimirFrecuencias (const TNumeros& r){
    for(unsigned i=0; i<MAX; i++){
        cout << i << ":"<< r[i] <<"; ";
    }
}

int main(){
    TNumeros r;

    iniciarArray(r);
    leerArray(r);
    imprimirFrecuencias(r);

return 0;
}
