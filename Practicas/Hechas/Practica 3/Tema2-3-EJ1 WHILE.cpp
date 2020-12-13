//Fecha 03/11/2016  Alumno: Miguel Angel Ruiz   Suma primeros numeros
#include <iostream>
using namespace std;

int main(){
    unsigned n, suma, contador;
    suma=0; contador=1;

    cout << "Introduzca un numero: ";
        cin >> n;
    while (contador <= n){
        suma = suma+contador;
        contador++;

    }
    cout << "La suma de sus primeros numeros sera igual a: " << suma << endl;



return 0;
}
