#include <iostream>
using namespace std;

int main(){
    unsigned limsup, liminf, intento;
    char respuesta;

    cout << "Piense en un numero y diga entre que dos numeros se encuentra\n";
    cout << "Controles:" << endl;
        cout << "  > si el numero es mayor\n";
        cout << "  < si es menor\n";
        cout << "  = si ha acertado" << endl;

    cout << "Introduzca el limite superior: ";
        cin >> limsup;
    cout << "Ahora el inferior: ";
        cin >> liminf;

    intento = (limsup+liminf)/2;
        cout << "El numero en el que has pensado es " << intento << "? ";
            cin >> respuesta;

    if(respuesta == 61){
            cout << "Acerte a la primera!";

    }else{
        while (respuesta != 61){
            if(respuesta == 60){
                cout << "Siguiente intento\n";
                    intento = (liminf+intento)/2;
                cout << "Es " << intento << "?";
                    cin >> respuesta;
            }else if(respuesta == 62){
                cout << "Siguiente intento\n";
                    intento = (limsup+intento)/2;
                cout << "Es " << intento << "?";
                    cin >> respuesta;
            }
        }
        cout << "Acerte!";
    }
return 0;
}
