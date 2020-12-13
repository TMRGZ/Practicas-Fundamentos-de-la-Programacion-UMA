#include <iostream>
using namespace std;

int main(){
    int comienzo, retirados;

    cout << "Introduce un numero con el que jugaremos: ";
        cin >> comienzo;

    if(comienzo%2==0){
            comienzo=comienzo-1;
                cout << "Empiezo yo" << endl;
                cout << "Quedan: " << comienzo << endl;
    }else{
        cout << "Empiezas tu\n";
    }
    while(comienzo>0){

            cout << "Introduce el numero de objetos a retirar: ";
                cin >> retirados;
                    while(retirados>3||retirados<0){
                        cout << "Introduzca un numero de objetos a retirar entre 3 y 1: ";
                            cin >> retirados;
                    }
            comienzo=comienzo-retirados;


            if(comienzo%4==0){
                comienzo=comienzo-3;
                    cout << "Quedan: " << comienzo << endl;
            }else if(comienzo%4==3){
                comienzo=comienzo-2;
                    cout << "Quedan: " << comienzo << endl;
            }else if(comienzo%4==2){
                comienzo=comienzo-1;
                    cout << "Quedan: " << comienzo << endl;
            }
    }

    cout << "Lo siento, la maquina gana";



return 0;
}
