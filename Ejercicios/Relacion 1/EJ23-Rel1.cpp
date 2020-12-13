#include <iostream>
using namespace std;

int main(){
    unsigned num, fib, paso1, paso2;

    fib=0; paso1=0; paso2=1;

    cout << "Introduzca un numero para calcular su sucesion de fibonacci: ";
        cin >> num;
    if(num==1 || num==0){
        fib=num;

    }else{
        for (unsigned i=1; i<num; i++){
            fib = paso1+paso2;
            paso1 = paso2;
            paso2 = fib;
        }
    }
    cout << "El resultado es: " << fib << endl;

return 0;
}
