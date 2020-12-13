//Miguel Angel Ruiz     Suma numeros

#include<iostream>
using namespace std;

unsigned sumaNaturales(unsigned n){
    unsigned suma;

    if(n==0){
        suma=0;
    }else{
        suma=n+sumaNaturales(n-1);
    }
return suma;
}


int main(){
    unsigned n;

    cout << "Introduzca n: ";
        cin >> n;

    cout << "El resultado es " << sumaNaturales(n);


return 0;
}
