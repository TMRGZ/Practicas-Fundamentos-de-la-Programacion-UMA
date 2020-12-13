//Fecha 03/11/2016  Alumno: Miguel Angel Ruiz   Suma primeros numeros
#include <iostream>
using namespace std;

int main(){
    unsigned n, suma;
    suma=0;

    cout << "Introduzca un numero: ";
        cin >> n;

    for(unsigned i=1; i<=n; i++){
            suma = suma+i;


    }
    cout << "La suma de sus primeros numeros sera igual a: " << suma << endl;


return 0;
}
