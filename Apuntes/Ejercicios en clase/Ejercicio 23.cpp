#include<iostream>
#include<string>
using namespace std;

const unsigned MPD=10;
typedef string TPalabras[MPD];
    struct TDatos{
        TPalabras palabras;
        unsigned npal;
    };

bool contenido(const string& patron, const string& texto){
    bool encontrado = false;
    unsigned j=0;

    while((!encontrado)&&(j<(palabra.size().patron.size()+1))){
        if(palabra.substr(j, patron.size())==patron){
            encontrado=true;
        }else{
            j++;
        }
    }
return encontrado;
}

void almacena(const string& texto, TDatos& p){
    unsigned j=0;
    bool repe=false;

    while((j<p.npal)&&(!repe)){
        if(p.palabras[j]==texto){
            repe=true;
        }else{
            j++;
        }
    }
    if(!repe){
        p.palabras[p.npal]=texto;
        p.npal++;
    }
}




int main(){
    TDatos p;
    string patron, texto;
    p.npal=0;

    cout << "Patron: " << endl;
        cin >> patron;

    cout << "Texto: " << endl;
        cin >> texto;

    while(texto!="FIN"){
        if(contenido(patron, texto)){
            almacena(texto, p);
        }
        cin >> texto;
    }

    escribir(p);

return 0;
}
