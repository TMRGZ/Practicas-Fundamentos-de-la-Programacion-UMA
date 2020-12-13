#include<iostream>
using namespace std;

const unsigned MAX=26;

struct TReq{
    int posicion;
    int mayor;
};
typedef TReq TVector[MAX];


int main(){
    TVector v;
    unsigned num, cont=0;
    char car;
    int distancia;
    iniciaVector(v);

    cout << "Introduzca el texto acabado en . : ";
        car=cin.get();

    while(car!='.'){
        if(v[int(car)-65]==1){

        }
    }


return 0;
}
