//Fecha 27/10/2016  Alumno: Miguel Angel Ruiz   Precio y descuento
#include <iostream>
using namespace std;
const float IVA = 1.12;
const float DESC = 0.95;
const float UNID = 100;

int main(){
    unsigned unidades;
    float preciosiniva;
    float precioiva;
    float preciodescontado;

    cout << "Introduzca el numero de unidades sabiendo que cada una vale 100: ";
        cin >> unidades;
            preciosiniva = unidades*UNID;
                precioiva = preciosiniva*IVA;
                    preciodescontado = precioiva*DESC;

    if(precioiva>300){
        cout << "El total a pagar es: " << preciodescontado << endl;
        cout << "Descuento del 5% aplicado.";
    }else{
        cout << "El total a pagar es: " << precioiva;
    }


return 0;
}
