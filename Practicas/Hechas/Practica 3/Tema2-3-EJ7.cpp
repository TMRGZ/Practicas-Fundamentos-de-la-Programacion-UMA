//Fecha 08/11/2016  Alumno: Miguel Angel Ruiz   O
#include <iostream>
using namespace std;

int main(){
    char operacion;
    float oper1, oper2, resultado;


    do{
        cout << "introduzca la operacion a realizar: ";
                cin >> operacion;
                if(operacion!='+'&&operacion!='-'&&operacion!='*'&&operacion!='/') {
                        throw "Operacion no valida";
                        }

        if(operacion!='&'){

            cout << "Introduzca el primer operando: ";
                cin >> oper1;
            cout << "Ahora el segundo: ";
                cin >> oper2;

            switch (operacion){
                case '+': cout << oper1+oper2 << endl;break;
                case '-': cout << oper1-oper2 << endl;break;
                case '*': cout << oper1*oper2 << endl;break;
                case '/': cout << oper1/oper2 << endl;break;
            }
        }

    }while (operacion!='&');



return 0;
}
