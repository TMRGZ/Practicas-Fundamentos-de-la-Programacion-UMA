//19/01/2017    Miguel Angel Ruiz   Anagrama
#include<iostream>
#include<string>
using namespace std;

bool esAnagrama(string primera, string palabra){
    string aux = palabra;
    unsigned i=0, j=0;
    bool encontrado=false;

    if(primera.size()!=aux.size()){
        return false;
    }

    while((encontrado==false)&&(i<primera.size())){
        while((encontrado==false)&&(j<aux.size())){
            if(primera[i]==aux[j]){
                aux[j]=' ';
                encontrado=true;
            }
        j++;
        }
    i++;
    }
return encontrado;
}



void lectura(string& primera, string& palabra){
    unsigned cont=0;

    cout << "Introduzca un texto acabado en FIN: " << endl;
        cin >> primera;

    while(palabra!="FIN"){
        cin >> palabra;

        if(esAnagrama(primera, palabra)){
            cont++;
            cout << palabra << " ";
        }
    }
    if(cont==0){
            cout << "Anagramas no encontrados";
        }
}

int main(){
    string primera, palabra;

    lectura(primera, palabra);

return 0;
}
