// Fecha: 22/10/16      Alumno: Miguel Angel Ruiz       conversion de segundos

#include <iostream>
using namespace std;
const unsigned CONVHOR = 3600;
const unsigned CONVMIN = 60;
const unsigned DIA = 86400;
const unsigned SEMAN = 604800;

int main(){
    unsigned segundosintro, minutos, horas, dias, semanas, segundos;
    unsigned restosem, restodias, restohoras;

    cout << "Programa para convertir segundos en minutos, horas, dias y semanas\n";
    cout << "Introduzca la cantidad en segundos: ";
        cin >> segundosintro;
            semanas = segundosintro/SEMAN;
                restosem = segundosintro%SEMAN;
                    dias = restosem/DIA;
                        restodias = restosem%DIA;
                            horas = restodias/CONVHOR;
                                restohoras = restodias%CONVHOR;
                                    minutos = restohoras/CONVMIN;
                                        segundos = restohoras%CONVMIN;


    cout << "El resultado es: " << endl;
    cout << semanas << " semanas " << dias << " dias " << horas << " hora/s " << minutos << " minutos " << segundos << " segundos ";





    return 0;
}
