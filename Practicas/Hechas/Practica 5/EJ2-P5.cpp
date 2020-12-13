//Miguel Angel Ruiz     Potencia recursiva

#include<iostream>
using namespace std;

unsigned potencia(unsigned x, unsigned n){
    unsigned res;

    if(n==0){
        res = 1;
    }else{
        res = x*potencia(x, n-1);
    }

return res;
}

int main(){
    unsigned x, n;

    cout << "Introduzca un exponente: ";
        cin >> x;
    cout << "Introduzca una base: ";
        cin >> n;

    cout << "El resultado es: " << potencia(n, x);

return 0;
}
