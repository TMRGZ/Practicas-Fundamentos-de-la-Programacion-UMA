//Fecha: 20/10/16   Autor: Miguel Angel Ruiz    Convertir pulgadas a centimetros
#include <iostream>
using namespace std;

const float CTMS_PULGADAS = 2.54;

int main(){
    float pulgadas, centimetros;
    cout << "Programa para convertir pulgadas a centimetros\n";
    cout << "Introduzca la medida en pulgadas: ";
        cin >> pulgadas;
    centimetros = pulgadas*CTMS_PULGADAS;

    cout << "Esa medida en centimetros es: " << centimetros;

    return 0;

}
