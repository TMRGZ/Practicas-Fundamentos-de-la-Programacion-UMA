//Miguel Angel Ruiz     15/12/16    histograma
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

unsigned tomarMayor(const TNumeros& r){
    unsigned mayor =r[0];

    for(unsigned i=1; i< 10; i++){
        if(r[i] > mayor){
        mayor = r[i];
        }
    }
return mayor;
}

void escribirHistograma(TNumeros& r, unsigned mayor){
    unsigned a = mayor;

    for(unsigned j=0; j<mayor; j++){
        for(unsigned i=0; i<MAX; i++){
            if(r[i]==a){
                cout << "* ";
                r[i]=r[i]-1;
            }else{
                cout << "  ";
            }
        }
        a=tomarMayor(r);
        cout << endl;
    }
    cout << "0 1 2 3 4 5 6 7 8 9";
}

int main(){
    TNumeros r;

    iniciarArray(r);
    leerArray(r);
    escribirHistograma(r, tomarMayor(r));


return 0;
}
