#include<iostream>
using namespace std;

const unsigned MAX=10;
typedef int TNumeros[MAX];

struct Vector{
    TNumeros numeros;
    unsigned tam;
};


void leerDatos(Vector& v){
    v.tam=0;
    int num; unsigned i=0;

    cout << "Introduzca elementos, 0 para terminar y como maximo " << MAX << ": " << endl;

    do{
        cout << "Elemento " << i+1 << ": ";
            cin >> num;

        i++;
    }while(i<MAX);
}


void insertar(Vector& v, int elem){
    if(v.tam<MAX){
        v.numeros[v.tam]=elem;
        v.tam++;
    }
}
void borrar(Vector& v, int elem){
    unsigned i=0;
    bool encontrado=false;

    while(i<v.tam&&!encontrado){
        if(v.numeros[i]==elem){
            encontrado=true;
        }
    i++;
    }
    if(encontrado){
        for(unsigned j=i; j<v.tam; j++){
            v.numeros[j]=v.numeros[j+1];
        }
    v.tam--;
    }
}

void insertarOrdenado(Vector& v, int num){
    if(v.tam<MAX){
        int i=0;

        while((i<v.tam)&&(v.numeros[i]<num)){
            i++;
        }
        if(i==v.tam){
            v.numeros[v.tam]=num;
            v.tam++;
        }else{
            for(unsigned j=v.tam-1; j>=i; j--){
                v.numeros[j+1]=v.numeros[j];
            }
        }
    }
}
/*void borrarOrdenado(Vector& v, int num){
    unsigned i=0;
    bool encontrado=false;

    while(i<v.tam&&v.numeros[i]<num){
        i++;
    }
    if(num==v.numero[i]){
        for(unsigned j=i; j<v.tam; j++){
            v.numeros[j]=v.numeros[j+1];
        }
    v.tam--;
    }
}*/

void imprimirDatos(const Vector& v){
    for(unsigned i=0; i<v.tam; i++){
        cout << v.numeros[i];
    }
}

int main(){
    Vector v;
    int elem;

    leerDatos(v);
    insertar(v, 67);
    borrar(v, elem);

return 0;
}
