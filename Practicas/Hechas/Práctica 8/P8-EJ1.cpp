//19/01/2017    Miguel Angel Ruiz   Cadenas
#include<iostream>
#include<string>
using namespace std;

int main(){
    string cadena;
    unsigned numero=0, potencia=1, intermedio=0;

    cout << "Introduzca numeros: ";
        cin >> cadena;

    for(unsigned i=cadena.size(); i>0; i--){
        numero=(cadena[i-1]-48)*potencia;
        intermedio=intermedio+numero;

        potencia=potencia*10;
    }

    cout << "Salida: " << intermedio;

return 0;
}
