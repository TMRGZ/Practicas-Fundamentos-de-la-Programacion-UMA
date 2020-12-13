//Fecha 27/10/2016  Alumno: Miguel Angel Ruiz   Fechas y dias de mes
#include <iostream>
using namespace std;

int main(){
    unsigned provincia, numoperacion, digcontrol;
    float comprobacion;

    cout << "A continuacion introduzca un numero de cuatro digitos\n";
    cout << "Introduzca el numero relacionado con la provincia (Un digito): ";
        cin >> provincia;
    cout << "Introduzca el numero de operacion (Dos digitos): ";
        cin >> numoperacion;
    cout << "Introduzca el digito de control: ";
        cin >> digcontrol;

    comprobacion = numoperacion%provincia;

    if(comprobacion==digcontrol){
        cout << "PROVINCIA               " << provincia << endl;
        cout << "NUMERO DE OPERACION     " << numoperacion << endl;
        cout << "DIGITO DE CONTROL       " << digcontrol << endl;
    }else{
        cout << "ERROR: CODIGO ERRONEO";
    }

return 0;
}
