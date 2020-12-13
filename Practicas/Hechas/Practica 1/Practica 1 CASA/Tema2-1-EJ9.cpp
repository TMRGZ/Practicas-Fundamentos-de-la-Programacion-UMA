// Fecha: 22/10/16      Alumno: Miguel Angel Ruiz       Fallo INT

#include <iostream>
using namespace std;

int main(){
    int primero, segundo, resultado;

    cout << "Programa que suma dos numeros\n";
    cout << "Introduzca el primer numero: ";
        cin >> primero;
    cout << "Ahora el segundo numero: ";
        cin >> segundo;

    resultado = primero+segundo;

    cout << "El resultado es: " << resultado;


    return 0;
    // No habra resultado dado que el numero 3000000000 es de mayor capacidad que el soportado por el tipo de datos int, dando asi un error en la suma
}
