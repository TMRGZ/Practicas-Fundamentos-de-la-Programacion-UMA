// Fecha: 20/10/16      Alumno: Miguel Angel Ruiz       ASCII
#include <iostream>
using namespace std;

int main(){
    char Let1, Let2, Let3, Let4;

    cout << "Introduzca cuatro letras en el teclado a continuacion\n";
    cout << "Introduzca la primera letra: ";
        cin >> Let1;
            Let1 = Let1 + 1;
    cout << "Introduzca la segunda letra: ";
        cin >> Let2;
            Let2 = Let2 + 1;
    cout << "Introduzca la tercera letra: ";
        cin >> Let3;
            Let3 = Let3 + 1;
    cout << "Introduzca la ultima letra: ";
        cin >> Let4;
            Let4 = Let4 + 1;

    cout << "la palabra resultante es: " << Let1 << Let2 << Let3 << Let4;
    return 0;
}
