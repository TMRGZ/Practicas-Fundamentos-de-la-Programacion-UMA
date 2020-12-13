// Fecha: 20/10/16      Alumno: Miguel Angel Ruiz       MB Kb y Bytes
#include <iostream>
using namespace std;
const int MB = 1024*1024;
const int KB = 1024;
int main(){
    unsigned numeroinicial;
    unsigned ConvMB, ConvKB, ConvBytes;
    unsigned resto1, restobytes;

    cout << "introduzca un numero para su conversion: ";
        cin >> numeroinicial;
            ConvMB = numeroinicial/MB;
                resto1 = numeroinicial%MB;
                    ConvKB = resto1/KB;
                        restobytes = resto1%KB;


    cout << "El resultado de su conversion es: \n";
    cout << ConvMB <<"MB "<< ConvKB <<"KB "<< restobytes << "Bytes";



return 0;
}

