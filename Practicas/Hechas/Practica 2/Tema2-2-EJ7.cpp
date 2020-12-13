//Fecha 27/10/2016  Alumno: Miguel Angel Ruiz   Fechas y dias de mes
#include <iostream>
using namespace std;

int main(){
    unsigned mes;

    cout << "Introduzca el numero del mes del que quiere saber su numero de dias: ";
        cin >> mes;

    switch (mes){
        case 1: cout << "Enero tiene 31 dias";break;
        case 2: cout << "Febrero tiene 28 dias";break;
        case 3: cout << "Marzo tiene 31 dias";break;
        case 4: cout << "Abril tiene 30 dias";break;
        case 5: cout << "Mayo tiene 31 dias";break;
        case 6: cout << "Junio tiene 30 dias";break;
        case 7: cout << "Julio tiene 31 dias";break;
        case 8: cout << "Agosto tiene 31 dias";break;
        case 9: cout << "Septiembre tiene 30 dias";break;
        case 10: cout << "Octubre tiene 31 dias";break;
        case 11: cout << "Noviembre tiene 30 dias";break;
        case 12: cout << "Diciembre tiene 31 dias";break;
        default: cout << "Error, introduzca un numero de mes correcto";break;
    }
return 0;
}
