//Fecha 27/10/2016  Alumno: Miguel Angel Ruiz   Fechas
#include <iostream>
using namespace std;

int main(){
    unsigned dia, mes, anno;

    cout << "A continuacion escriba una fecha en numeros\n";
    cout << "Introduzca el dia: ";
        cin >> dia;
    cout << "Introduzca el mes: ";
        cin >> mes;
    cout << "Introduzca el anno: ";
        cin >> anno;

    switch (mes){
        case 1: cout << dia << "/" << "Enero/" << anno;break;
        case 2: cout << dia << "/" << "Febrero/" << anno;break;
        case 3: cout << dia << "/" << "Marzo/" << anno;break;
        case 4: cout << dia << "/" << "Abril/" << anno;break;
        case 5: cout << dia << "/" << "Mayo/" << anno;break;
        case 6: cout << dia << "/" << "Junio/" << anno;break;
        case 7: cout << dia << "/" << "Julio/" << anno;break;
        case 8: cout << dia << "/" << "Agosto/" << anno;break;
        case 9: cout << dia << "/" << "Septiembre/" << anno;break;
        case 10: cout << dia << "/" << "Octubre/" << anno;break;
        case 11: cout << dia << "/" << "Noviembre/" << anno;break;
        case 12: cout << dia << "/" << "Diciembre/" << anno;break;
        default: cout << "La fecha es erronea";break;
    }

return 0;
}
