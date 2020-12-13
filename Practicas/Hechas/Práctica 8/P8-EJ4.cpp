//19/01/2017    Miguel Angel Ruiz   Calculadora
#include<iostream>
#include<string>
using namespace std;

string restaString(string op1, string op2){
    string res;
    bool esta;
    for(unsigned i=0; i<op1.size(); i++){
        esta = false;
        unsigned j=0;

        while(esta==false&&j<op2.size()){
            if(op1[i] == op2[j]){
                esta=true;
            }
        j++;
        }

        if(!esta){
            res = res+op1[i];
        }
    }
return res;
}

string interseccion(string op1, string op2){
    string res;
    bool esta;
    for(unsigned i=0; i < op1.size(); i++){
        esta = false;
        unsigned j = 0;
        while(esta==false&&j<op2.size()){
            if(op1[i]==op2[j]){
                esta=true;
            }
        j++;
        }
        if(esta){
            res = res+op1[i];
        }
    }
return res;
}

string realizarOperacion(char operacion, string op1, string op2){
    string resultado;
    switch (operacion){
        case '+': resultado = op1+op2; break;
        case '-': resultado = restaString(op1,op2); break;
        case '*': resultado = interseccion(op1, op2); break;
    }

return resultado;
}

void introducirDatos(){
    char operacion;
    string op1, op2;

    do{
        cout << "Operación: ";
        cin >> operacion;
    }while(operacion!='+'&&operacion!='-'&&operacion!='*'&&operacion!='&');

    while(operacion!='&'){
        cout << "Operando 1: ";
            cin >> op1;
        cout << "Operando 2: ";
            cin >> op2;

        string resultado=realizarOperacion(operacion, op1, op2);
        cout << "Resultado: " << resultado << endl;

        do{
            cout << "Operación: ";
            cin >> operacion;
        }while(operacion!='+'&&operacion!='-'&&operacion!='*'&& operacion!='&');

            if(operacion=='&'){
                cout << "FIN";
            }
    }
}

int main() {
    cout << "Operaciones con strings" << endl;
    introducirDatos();

return 0;
}
