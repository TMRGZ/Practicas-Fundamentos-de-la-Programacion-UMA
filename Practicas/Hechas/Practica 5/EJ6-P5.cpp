//Miguel Angel Ruiz     Primo Recursivo

#include<iostream>
using namespace std;

void decimalBinario(unsigned n){
    unsigned binario, auxiliar;

    if(n==0){
        binario = 0;
    }else{
        decimalBinario(n/2);
        cout << n%2;
    }
}


int main(){
    unsigned n;

    cout << "Introduce un numero decimal para pasarlo a binario: ";
        cin >> n;
    cout << "El numero en binario es: ";
        decimalBinario(n);

return 0;
}
