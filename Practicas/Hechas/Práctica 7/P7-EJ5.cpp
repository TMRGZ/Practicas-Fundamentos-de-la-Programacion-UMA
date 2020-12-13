//Miguel Angel Ruiz     22/12/2016
#include <iostream>
using namespace std;
const unsigned MAX=10;
typedef unsigned TArray[MAX];


void leerArray(TArray& numeros){
    cout << "Introduce 10 num positivos: ";

    for(unsigned i=0; i<MAX; i++){
        cin >> numeros[i];
    }
}
unsigned contarNumero(const TArray& numeros, unsigned num){
    unsigned contador=0;

    for(unsigned i=0; i< MAX; i++){
        if(numeros[i]== num){
            contador++;
        }
    }
 return contador;
}
void buscarPosiciones(const TArray& numeros, unsigned num, unsigned contador){
    unsigned i=0;
    unsigned c=0;

    if(contador==1){
        cout << " vez, en la posición ";
    }else{
        cout << " veces, en posiciones ";
    }
    while(i<MAX&&c<=contador){
        if(numeros[i]==num){
            cout << i+1 << " ";
            c++;
        }
    i++;
    }
cout <<"" << endl;
}
unsigned buscarMayor(const TArray& numeros){
    unsigned mayor = numeros[0];

    for(unsigned i=1; i<MAX; i++){
        if(numeros[i]>mayor){
        mayor = numeros[i];
        }
    }
return mayor;
}
void eliminarUsado(TArray& numeros, unsigned mayor){
    for(unsigned i=0; i<MAX; i++){
        if(numeros[i]==mayor){
            numeros[i]=0;
        }
    }
}
int main() {
    unsigned mayor, contador;
    TArray numeros;
    leerArray(numeros);
    mayor = buscarMayor(numeros);

    while(mayor!=0){
        cout << mayor << " aparece ";
            contador = contarNumero(numeros, mayor);
                cout << contador;

        buscarPosiciones(numeros, mayor, contador);
        eliminarUsado(numeros, mayor);
        mayor = buscarMayor(numeros);
    }
 return 0;
}
