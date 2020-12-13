//Miguel Angel Ruiz     Invertir numeros

#include<iostream>
using namespace std;

void inverso (unsigned n){
    unsigned inv;

    if(n==0){
        cout << " ";
    }else{
        cout << n%10;
        inverso(n/10);
    }
}


int main(){
    unsigned n;

    cout << "Introduzca el numero a invertir: ";
        cin >> n;
    cout << "El numero invertido es: ";
        inverso(n);


return 0;
}
