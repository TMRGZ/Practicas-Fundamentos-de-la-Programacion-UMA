//Fecha 27/10/2016  Alumno: Miguel Angel Ruiz   Mayor estricto
#include <iostream>
using namespace std;

int main(){
    unsigned num1, num2, num3;

    cout << "Introduzca tres numeros a continuacion\n";
    cout << "Introduzca el primer numero: ";
        cin >> num1;
    cout << "Introduzca el segundo numero: ";
        cin >> num2;
    cout << "Introduzca el tercer numero: ";
        cin >> num3;

    if (num1>num2&&num1>num3){
        cout << "El numero mayor es: " << num1;
    }else if (num2>num1&&num2>num3){
        cout << "El mayor numero es: " << num2;
    }else if (num3>num2&&num3>>num1){
        cout << "El mayor es: " << num3;
    }else if (num1==num2&&num2==num3){
        cout << "Todos los numeros son iguales";
    }

return 0;
}
