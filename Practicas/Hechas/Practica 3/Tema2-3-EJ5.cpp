//Fecha 08/11/2016  Alumno: Miguel Angel Ruiz   Sacar PI
#include <iostream>
using namespace std;

int main(){
    unsigned contadornum, contadordenom;
    float valor, denominador, numerador;
    float pi, fraccion;

    denominador = 3; numerador = 2; contadornum=1; contadordenom=0; pi=4;

    cout << "inserte un valor para sacar PI: ";
        cin >> valor;

    for(unsigned i=1; i<=valor; i++){
        fraccion = numerador/denominador;

        pi=pi*fraccion;

        contadornum++; contadordenom++;
        if(contadornum%2==0){
            numerador=numerador+2;
        }if(contadordenom%2==0){
            denominador=denominador+2;
        }
    }
    cout << "El valor de PI es: " << pi;

return 0;
}
