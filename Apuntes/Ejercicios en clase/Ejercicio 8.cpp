#include<iostream>
using namespace std;

const unsigned MAX=10;
typedef char Componentes[MAX];

struct Vector{
    Componentes datos;
    unsigned tam;
};

void leerVector(Vector& v){
    int i=0;
    char car;

    cout << "Introduzca una serie de caracteres acabada en . : ";
        car=cin.get();

    while((car!='.')&&(i<MAX)){
        v.datos[i]=car;
        i++;
        car=cin.get();
    }
    v.tam=i;
}

void buscar(const Vector& v, int elem, bool& res, int& pos){

}

bool iguales(const Vector& v1, const Vector& v2){
    int i, j;
    bool res, encontrado;

    if(v1.tam!=v2.tam){
        return false;
    }else{
        buscar(v2, v1.datos[0], encontrado, j);

        if(encontrado){
            i=0;
            while((-1<v1.tam)&&(v1.datos[i]==v2.datos[j])){
                i=i+1;
                j=(j+1)%v2.tam;
            }

            if(i==v1.tam){
                res=true;
            }else{
                res=false;
            }
        }else{
            res=false;
        }
    }
return res;
}


int main(){
    Vector v1, v2;

    leerVector (v1);
    leerVector (v2);

    if(iguales(v1, v2)){
        cout << "Los vectores son iguales";
    }else{
        cout << "Los vectores no son iguales";
    }

return 0;
}
