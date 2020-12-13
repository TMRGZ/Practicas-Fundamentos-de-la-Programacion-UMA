#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
    unsigned hora1;
    unsigned hora2;
    unsigned hora1enminutos;
    unsigned hora2enminutos;
    unsigned minutos1;
    unsigned minutos2;
    unsigned primerahora;
    unsigned segundahora;
    int resta;
    int restaminut;



    cout << "Programa para para dar la diferencia entre dos instantes de tiempo\n";
    cout << "Introduzca la hora en formato 24h: ";
        cin >> hora1;
            hora1enminutos = hora1*60;
    cout << "Y los minutos? ";
        cin >> minutos1;
            primerahora = hora1enminutos+minutos1;
    cout << "Introduzca la segunda hora a comparar: ";
        cin >> hora2;
            hora2enminutos = hora2*60;
    cout << "Y sus minutos? ";
        cin >> minutos2;
            segundahora = hora2enminutos+minutos2;

    resta = primerahora-segundahora;
    resta = resta/60;
    resta = resta*resta;
    resta = sqrt(resta);

    restaminut = minutos1 - minutos2;
    restaminut = restaminut*restaminut;
    restaminut = sqrt(restaminut);

    cout << "La diferencia es: " << resta <<":" <<restaminut;
    system ( "PAUSE" );
    return 0;
}
