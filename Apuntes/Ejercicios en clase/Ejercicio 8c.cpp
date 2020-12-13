#include<iostream>
using namespace std;

const unsigned MAX=10;
typedef char Componentes[MAX];

struct Vector{
    Componentes datos;
    unsigned tam;
};

void mezcla (const Vector& v1, const Vector& v2, Vector& v3){
    unsigned i=0, j=0, k=0;
    v3.tam=0;

    while((i<v1.tam)&&(j<v2.tam)&&(k<MAX)){
        if(v1.datos[i]<v2.datos[j]){
            v3.datos[k]=v1.datos[i];
            i++;
            k++;
        }else{
            v3.datos[k]=v2.datos[j];
            j++;
            k++;
        }
    v3.tam++;
    }
    while((i<v1.tam)&&(k<MAX)){
        v3.datos[k]=v1.datos[i];
        i++;
        k++;
        v3.tam++;
    }
    while((j<v2.tam)&&(k<MAX)){
        v3.datos[k]=v2.datos[j];
        j++;
        k++;
        v3.tam++;
    }
}

void borrar(Vector& v, int pos){
    for(unsigned i=pos; i<v.tam-1; i++){
        v.datos[i]=v.datos[i+1];
    }
v.tam--;
}


void limpiar(const Vector& v1, Vector& v2){
    bool encontrado;
    int pos;

    for(unsigned i=0; i<v2.tam; i++){
        buscar(v1, v2.datos[i], encontrado, pos);

        if(!encontrado){
            borrar(v2, i);
        }
    }
}


void escribirVector(const& Vector v){
    for(unsigned i=0; i<v.tam; i++){
        cout << v.datos[i];
    }
}

int main(){
    Vector v1, v2, v3;

    leerVector(v1);
    leerVector(v2);

    limpiar(v1, v2);
    escribirVector(v2);

return 0;
}
