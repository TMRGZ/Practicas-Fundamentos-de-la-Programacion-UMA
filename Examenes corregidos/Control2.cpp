#include<iostream>
using namespace std;
const unsigned MAX=5;

typedef int TArray[MAX];

struct TVector{
	TArray elementos;
	unsigned numElem;
};

void leerVector(TVector& v1){
    //Inicializar
    for(unsigned x=0; x<=MAX; x++){
        v1.elementos[x]=-1;
    }

    int intro=0;
    unsigned i=0;

    while(intro>=0){
            cin >> intro;
        if(i<MAX){
            v1.elementos[i] = intro;
        }
    i++;
    }
}

void buscar(TVector& v1, int elem, bool& encontrado, unsigned& pos){
    encontrado=false;
    unsigned i=0;

    while((encontrado==false)&&(i<v1.numElem)){
        v1.elementos[i];

        if(v1.elementos[i]==elem){
            encontrado=true;
            pos=i;
        }
    i++;
    }
}

void escribirVector(const TVector& v1){
    unsigned i=0;

    while(i<MAX){
        if(v1.elementos[i]>=0){
            cout << v1.elementos[i];
        }
    i++;
    }
cout << endl;
}

void anadir(TVector& v1, const TVector& v2){
    unsigned i=0, j=0;
    bool terminado=false;

    while(i<MAX){
        if(v1.elementos[i]<0){
            terminado=true;
        }
        if(terminado==true){
            v1.elementos[i]=v2.elementos[j];
        j++;
        }
    i++;
    }
}

void criba(TVector& v1, unsigned elem){
    for(unsigned i=0; i<=MAX; i++){
        if(v1.elementos[i]==elem){
            v1.elementos[i]=-1;
        }
    }
}

int main() {
	TVector v1,v2;
    int elem;
    bool encontrado;
    unsigned pos;

    //-------------EJERCICIO 1--------------
    v1.numElem=4;
    v1.elementos[0]=1;
    v1.elementos[1]=2;
    v1.elementos[2]=4;
    v1.elementos[3]=5;

	cout << "Prueba de Buscar" << endl;
	cout << "Introduzca el elemento a buscar:";
        cin >> elem;

	buscar(v1, elem, encontrado, pos);

	if (encontrado){
        cout << "El valor " << elem << " esta contenido dentro del vector en la posicion " << pos;
	}else{
        cout << "El valor " << elem << " no esta contenido dentro del vector.";
	}
    cout << endl;

    //----------------EJERCICIO 2--------------

	cout << "Introduzca la primera lista (negativo para acabar): "<<endl;
        leerVector(v1);

	cout << "Introduzca la segunda lista (negativo para acabar): "<<endl;
        leerVector(v2);

	cout<< "Lista1: ";
        escribirVector(v1);

	cout << "Lista2: ";
        escribirVector(v2);

    //-------------EJERCICIO 2 PARTE 2------------

	anadir(v1,v2);

	cout << "Valores de lista1 despues de anadir: ";
        escribirVector(v1);

	//-----------EJERCICIO 2 PARTE 3--------------

	cout << "Introduzca el elemento a eliminar: " << endl;
        cin.ignore(100,'\n');
        cin >> elem;

	criba(v1,elem);

	cout << "Valores de lista1 despues de la criba: ";
        escribirVector(v1);

return 0;
}
