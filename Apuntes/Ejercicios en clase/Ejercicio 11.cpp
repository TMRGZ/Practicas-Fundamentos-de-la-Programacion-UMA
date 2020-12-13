//Miguel Angel Ruiz     15/12/16    Ej11
#include<iostream>
using namespace std;

const unsigned MAX=10;
typedef int TArray[MAX];

struct TLista{
    TArray elementos;
    unsigned numElem;
};

void leerDatos(TLista& reg){
    unsigned num;

    cout << "Introduzca elementos, 0 para terminar y como maximo " << MAX << ": ";
        reg.numElem=0;
        cin >> num;

    while((num!=0)&&(reg.numElem<MAX)){
        reg.elementos[reg.numElem]= num;
        reg.numElem++;
        cin >> num;
    }
}

int repeticiones(int elem, const TLista& l){
    int cont=0;

    for(unsigned i=0; i<l.numElem; i++){
        if(l.elementos[i]==elem){
            cont++;
        }
    }
return cont;
}

bool estaContenido(const TLista&, int elem){
    for(unsigned i=0; i<lista.numelem; i++){
        if(lista.elementos[i]==elem){
            return true;
        }
    }
return false;
}

void criba(const TLista& lista1, int x, TLista& lista2){
    lista2.numElem=0;

    for(unsigned i=0; i<lista1.numElem; i++){
        if(repeticiones(((lista1.elementos[i], lista1)==x)&&!=estaContenido(lista2, lista1.elementos[i])){
            lista2.elementos[lista2.numElem]=lista1.elementos[i];
            lista2.numElem++;
        }
    }
}


int main(){
    TLista lista1, lista2;
    int repe;

    leerDatos(lista1);

    cout << "Introduzca el numero de repeticiones: ";
        cin >> repe;

    criba(lista1, repe, lista2);
    escribirDatos(lista2);
}
