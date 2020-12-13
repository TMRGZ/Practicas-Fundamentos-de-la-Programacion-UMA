// Fecha: 22/10/16      Alumno: Miguel Angel Ruiz       Descubrir programa
#include <iostream>
using namespace std;

int main()
{
    int a=6, b=14;
    int auxiliar;

cout << "Primera parte del problema\n";
cout << "a vale " << a << " y b vale " << b << endl;

// ¿Qué hacen estas tres sentencias?
    //Usamos el auxilar para preservar el valor de a
  auxiliar = a;
    //Sustituimos el valor de a por el de b
  a = b;
    //Y b toma el valor de a guardado en el auxiliar
  b = auxiliar;
    //Con esto se consigue intercambiar los valores de a y b

    cout << "a vale " << a << " y b vale " << b << endl;

cout << "Segunda parte del problema\n";

    a=6; b=14;

cout << "a vale " << a << " y b vale " << b << endl;

// ¿Qué hacen estas tres sentencias?
  //a toma el valor de a y b sumandolos
  a = a+b;
    //b consigue el valor de a restandose a si mismo
  b = a-b;
    //a consigue el valor de b restendo a a el valor que adquirio b en la anterior operacion
  a = a-b;
cout << "a vale " << a << " y b vale " << b << endl;





  return 0;

}
