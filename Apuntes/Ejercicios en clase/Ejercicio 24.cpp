#include<iostream>
#include<string>
using namespace std;

const unsigned MPD=20;
const unsigned MR=10;

typedef unsigned TPosiciones[MR];
    struct TPalabra{
        string palabra;
        TPosiciones posiciones;
        unsigned nposic;

    };
typedef string TColeccion[MPD];
    struct TDatos{
        TColeccion palabras;
        unsigned npal;
    };

unsigned buscar(const TDatos& datos, const string& pal){
    unsigned i=0;

    while((i<datos.npal)&&(datos.palabras[i].palabra!=pal)){
        i++;
    }
return i;
}

void almacenar(const string& palabra, unsigned pos, TDatos& datos){
    unsigned ind = buscar(datos, pal);

    if(ind>=datos.npal){
        datos.palabras[datos.npal].palabra=pal;
        datos.palabras[datos.npal].posiciones[0]=pos;
        datos.palabras[datos.npal].nposic=1;
    }else{
        datos.palabra[ind].posiciones[datos.palabras[ind].nposic]=pos;
        datos.palabras[ind].nposic++;
    }
}

void escribir(const TDatos& datos){
    for(unsigned i=0; i<datos.npal; i++){
        cout << datos.palabras[i].palabra;

        for(int j=0; j<j.datos.palabras[i].nposic; j++){
            cout << " " << datos.palabras[i].posiciones[j];
        }
        cout << endl;
    }
}

int main(){
    TDatos datos;
    string palabra;
    datos npal=0;

    cout << "Texto: ";
        cin >> palabra;

    while(palabra!="FIN"){
        almacenar(palabra, pos, datos);
        cin >> palabra;
        pos++;
    }

    escribir(datos);

return 0;
}
