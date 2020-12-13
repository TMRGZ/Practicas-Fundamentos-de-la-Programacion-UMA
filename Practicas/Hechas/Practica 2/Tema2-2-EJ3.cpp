//Fecha 27/10/2016  Alumno: Miguel Angel Ruiz   Punto, letra o error
#include <iostream>
using namespace std;

int main(){
    char valor;

    cout << "Introduzca una letra o un punto: ";
        cin >> valor;

    if (valor==46){
        cout << "El valor es un punto";
    }else if(valor>=65&&valor<=90&&valor>=97&&valor<=122){
        cout << "El valor es una letra";
    }else {
        cout << "Error";
    }

return 0;
}
