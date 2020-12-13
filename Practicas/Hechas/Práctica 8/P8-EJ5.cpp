#include<iostream>
#include<string>
using namespace std;
const unsigned MAX=10;
typedef string TPalabras[MAX];

struct TDatos{
    TPalabras palabras;
    unsigned npal;
};

bool contenido(const string& patron, const string& palabra){
    bool encontrado=false;
    unsigned j=0;

    while((!encontrado)&&(j<(palabra.size()-patron.size()+1))){
        if(palabra.substr(j, patron.size())==patron){
            encontrado=true;
        }else{
            j++;
        }
    }
return encontrado;
}

void almacena(TDatos& p, const string& texto){
    int j=0;
    bool repe=false;

    while((j<p.npal)&&(!repe)){
        if(p.palabras[j]==texto){
            repe=true;
        }else{
            j++;
        }
        if(!repe){
            p.palabras[p.npal]=texto;
            p.npal++;
        }
    }
}

void escribir(const TDatos& p){
    for(unsigned j=0; j<p.npal; j++){
        cout << p.palabras[j] << " ";
    }
}

int main(){
    string patron, texto;
    TDatos p;

    p.npal=0;

    cout << "Introduzca un patron: ";
        cin >> patron;
    cout << "Introduzca un texto acabado en FIN: ";
        while(texto!="FIN"){
            cin >> texto;

            if(contenido(patron, texto)){
                almacena(p, texto);
            }

        }

    escribir(p);

return 0;
}
