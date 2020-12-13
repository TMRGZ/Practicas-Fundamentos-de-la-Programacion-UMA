// Fecha: 20/10/16      Alumno: Miguel Angel Ruiz       Tipo de datos Int
#include <iostream>
using namespace std;
/*El programa mostrara el numero entero introducido, pero en el caso de saltarse el tipo de datos int
con una palabra mostrara un 0 y en caso de introducir un numero con un decimal, este sera ignorado mostrando solo el numero
entero   */
int main(){
    int dato;

    cout << "Introduzca un numero entero: ";
        cin >> dato;

    cout << "Has introducido: " << dato;

return 0;
}
