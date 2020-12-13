//Fecha 27/10/2016  Alumno: Miguel Angel Ruiz   Consumos
#include <iostream>
using namespace std;
const unsigned GASTOFIJO = 1;
const float PRIMEROS100 = 0.50;
const float SIGUIENTES150 = 0.35;
const float RESTO = 0.25;

int main(){
float primero, segundo, consumokw;
float gastofinal, restoconsumo;

cout << "A continuacion introduzca los dos ultimos valores del contador de luz\n";
cout << "Introduzca el primero: ";
    cin >> primero;
cout << "Introduzca el segundo: ";
    cin >> segundo;

    consumokw = segundo-primero;


//superando los dos tramos
if(consumokw>=250){
    restoconsumo = consumokw-250;
    gastofinal = GASTOFIJO+(100*PRIMEROS100)+(150*SIGUIENTES150)+(restoconsumo*RESTO);
    cout << "Su consumo es de: " << gastofinal << " euros";
//Sin superar el primero
}else if(consumokw<=100){
    gastofinal = GASTOFIJO+(consumokw*PRIMEROS100);
    cout << "Su consumo es de: " << gastofinal << " euros";
//Entre primero y segundo
}else if (consumokw<250&&consumokw>100){
    restoconsumo = consumokw-100;
    gastofinal = GASTOFIJO+(100*PRIMEROS100)+(restoconsumo*SIGUIENTES150);
    cout << "Su consumo es de: " << gastofinal << " euros";
}



return 0;
}
