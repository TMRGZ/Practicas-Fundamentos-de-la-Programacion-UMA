// Fecha: 22/10/16      Alumno: Miguel Angel Ruiz       Area y longitud

#include <iostream>
using namespace std;

const int PI=3.1416;

int main()
 {
     double longitud, area;
     int radio;

        cout << "Hola" << endl;
        cout << "Este programa calcula la longitud y el área de un círculo\n";
        cout << "Introduzca el radio: ";
            cin >> radio;

        longitud = 2*PI*radio;
        area = PI*(radio*radio);
        cout << "area = " << area << endl;
        cout << "longitud = " << longitud << endl;

        return 0;    // Valor de retorno al S.O. }
 }
