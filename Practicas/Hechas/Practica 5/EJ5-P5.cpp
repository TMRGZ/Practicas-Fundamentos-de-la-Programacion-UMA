//Miguel Angel Ruiz     Primo Recursivo

#include<iostream>
using namespace std;

bool esPrimoRec(unsigned num, unsigned divisor){

    if(divisor<num){
        if(num%divisor!=0){
            esPrimoRec(num, divisor+1);

        }else{
            return false;

        }
    }
    return true;
}

int main(){
    unsigned num, divisor;
    bool test;

    cout << "Introduzca un numero: ";
        cin >> num;

    test=esPrimoRec(num, 2);

    if(test){
        cout << "El numero es primo";
    }else{
        cout << "El numero no es primo";
    }

return 0;
}
