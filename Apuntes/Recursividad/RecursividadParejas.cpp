#include<iostream>
using namespace std;

unsigned parejas (unsigned n){
    unsigned res;

    if(n<=2){
        res = 1;

    }else{
        res = parejas(n-1)+parejas(n-2);
    }
    return res;
}
int main(){
    unsigned n, resultado;
    cout << "introduce: ";
        cin >> n;

    resultado = parejas (n);

    cout << "Resultado: " << resultado;

    return 0;
}
