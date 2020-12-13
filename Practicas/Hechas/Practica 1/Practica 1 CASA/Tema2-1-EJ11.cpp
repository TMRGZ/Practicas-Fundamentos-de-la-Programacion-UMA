// Fecha: 22/10/16      Alumno: Miguel Angel Ruiz       Nota final

#include <iostream>
using namespace std;
const float TEORIA = 0.7;
const float PRACTICA = 0.3;
int main(){

    float notateoria, notapractica, notafinal;

    cout << "Programa para calcular la nota final de los alumnos\n";
    cout << "Cuanto ha sacado el alumno en la parte teorica? ";
        cin >> notateoria;
    cout << "Y cuanto en las practicas? ";
        cin >> notapractica;


    notafinal = (notateoria*TEORIA)+(notapractica*PRACTICA);
    cout << "La nota final del alumno es: " << notafinal;





    return 0;
}
