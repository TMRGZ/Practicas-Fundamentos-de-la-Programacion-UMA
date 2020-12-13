//Fecha 08/11/2016  Alumno: Miguel Angel Ruiz   ASCII asociado a caracteres+contador
#include <iostream>
using namespace std;

int main(){
    unsigned contador, centinela, ascii;
    char secuencia;

    contador = 0;

    cout << "Introduzca una secuencia de caracteres ACABADA EN PUNTO: ";
        cin >> secuencia;

    while(secuencia!='.'){
        ascii = secuencia;
        cout << "Caracter: " << secuencia << " asociado a: " << ascii << endl;
        contador++;
        cin >> secuencia;
    }
    cout << "Numero de caracteres leidos: " << contador;

return 0;
}
