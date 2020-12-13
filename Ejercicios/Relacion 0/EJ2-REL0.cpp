#include <iostream>
#include <stdlib.h>

using namespace std;
const float impuestobase = 0.2;
const float seguromedico = 0.05;

int main()
{
    float sueldobase;
    float salarioneto;
    float sueldobruto;
    unsigned antiguedad;
    unsigned quinquenios;

    cout << "Programa para calcular el salario neto de un trabajador\n";
    cout << "Introduzca el sueldo base: ";
        cin >> sueldobase;
    cout << "¿Cuantos quinquenios tiene trabajados? ";
        cin >> quinquenios;
    cout << "¿Y años restantes? ";
        cin >> antiguedad;

    sueldobruto =sueldobase + quinquenios*60 + antiguedad*6;
    salarioneto = sueldobruto - (sueldobruto*impuestobase) + (sueldobruto*seguromedico);

    cout << "El salario neto del trabajador es: " << salarioneto << endl;

    system ( "PAUSE" );



    return 0;





}
