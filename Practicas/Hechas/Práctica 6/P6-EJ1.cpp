//Miguel Angel Ruiz     15/12/16    valor mayor
#include<iostream>
using namespace std;

const unsigned MAX=10;
typedef float TArray[MAX];

void leerArray(TArray& v){
    cout << "Introduzca los datos del array: ";

    for(unsigned i=0; i<MAX; i++){
        cin >> v[i];
    }
}
float mayor(const TArray& v){
    int compr=v[0];

    for(unsigned i=1; i<MAX; i++){
        if((v[i])>compr){
            compr = v[i];
        }
    }
return compr;
}

int main(){
    float maximo;
    TArray(a);

    leerArray(a);
    maximo=mayor(a);

    cout << "El elemento mayor es: " << maximo;

return 0;
}
