//Fecha 03/11/2016  Alumno: Miguel Angel Ruiz   Valor medio de coches
#include <iostream>
using namespace std;

int main(){
    unsigned n, mod, i, total, contador;
    float media;
    mod=0; i=1; contador=0; total=0;
    cout << "Introduzca el numero de modelos de coche: ";
        cin >> n;

    for(unsigned i=1; i<=n; i++){

        contador++;
        cout << "Introduzca el precio del modelo "<<contador<<": ";
            cin >> mod;
        total = total+mod;
    }
    media=total/contador;
    cout << "El valor medio de los modelos es: " << media;


return 0;
}
