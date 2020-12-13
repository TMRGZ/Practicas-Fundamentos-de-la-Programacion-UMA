// Fecha: 22/10/16      Alumno: Miguel Angel Ruiz       De minusculas a mayusculas

#include <iostream>
using namespace std;
const unsigned MIN_MAY = 32;
int main(){
    char primeraletra, segundaletra, terceraletra, cuartaletra;

    cout << "A continuacion introduzca cuatro letras en MINUSCULA y seran convertidas en mayuscula\n";
    cout << "introduzca la primera letra: ";
        cin >> primeraletra;
            primeraletra = primeraletra-MIN_MAY;
    cout << "introduzca la segunda letra: ";
        cin >> segundaletra;
            segundaletra = segundaletra-MIN_MAY;
    cout << "introduzca la tercera letra: ";
        cin >> terceraletra;
            terceraletra = terceraletra-MIN_MAY;
    cout << "introduzca la cuarta letra: ";
        cin >> cuartaletra;
            cuartaletra = cuartaletra-MIN_MAY;

    cout << "El resultado en mayusculas es: \n";
        cout << primeraletra << endl;
        cout << segundaletra << endl;
        cout << terceraletra << endl;
        cout << cuartaletra << endl;


return 0;
}
