// Fecha: 20/10/16      Alumno: Miguel Angel Ruiz       Tamaño de los tipos de datos
#include <iostream>
using namespace std;

int main(){
// Basico
    cout << "El numero de bytes para almacenar un dato tipo unsigned es: " << sizeof(unsigned) << endl;
    cout << "El numero de bytes para almacenar un dato tipo char es: " << sizeof (char) << endl;
    cout << "El numero de bytes para almacenar un dato tipo int es: " << sizeof (int) << endl;
    cout << "El numero de bytes para almacenar un dato tipo bool es: " << sizeof (bool) << endl;
    cout << "El numero de bytes para almacenar un dato tipo float es: " << sizeof (float) << endl;
    cout << "El numero de bytes para almacenar un dato tipo double es: " << sizeof (double) << endl;
// Variante LONG
    cout << "El numero de bytes para almacenar un dato tipo unsigned long es: " << sizeof (unsigned long) << endl;
    cout << "El numero de bytes para almacenar un dato tipo int long es: " << sizeof (int long) << endl;
    cout << "El numero de bytes para almacenar un dato tipo double long es: " << sizeof (double long) << endl;
// Variante SHORT
    cout << "El numero de bytes para almacenar un dato tipo unsigned short es: " << sizeof (unsigned short) << endl;
    cout << "El numero de bytes para almacenar un dato tipo int short es: " << sizeof (int short) << endl;




return 0;
}
