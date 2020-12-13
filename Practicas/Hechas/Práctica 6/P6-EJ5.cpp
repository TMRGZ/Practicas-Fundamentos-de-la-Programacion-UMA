//Miguel Angel Ruiz     15/12/16    Numeros primos
#include<iostream>
using namespace std;

const unsigned MAX=1000;
typedef int TArray[MAX];

void iniciarArray(TArray& r, unsigned n){

    for(unsigned i=0; i<n; i++){
        r[i]=i+1;
    }
}

void eliminarNumeros(TArray r, unsigned n){
    for(unsigned i=2; i<n; i++){
        if(r[i]!=0){
            for(unsigned j=i+1; j<n; j++){
                if((j+1)%(i+1)==0){
                    r[j]=0;
                }
            }
        }
    }
}

void erastotenes(const TArray& r, unsigned n){
    for(unsigned i=0; i<n; i++){
        if(r[i]!=0&&r[i]!=1){
            cout << r[i] << " ";
        }
    }
}

int main(){
    unsigned n;
    TArray r;

    cout << "Introduzca limite de calcular numeros primos: ";
        cin >> n;

    iniciarArray(r, n);
    eliminarNumeros(r, n);
    erastotenes(r, n);

return 0;
}
