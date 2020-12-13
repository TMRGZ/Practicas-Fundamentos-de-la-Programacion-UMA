#include<iostream>
#include<string>
using namespace std;

const unsigned MAX=100;
typedef string TVector[MAX];

bool busca(const string& primera, const string& texto){


}














int main(){

    string primera, texto;
    bool encontrado;

    cout << "Introduce una secuencia de cadenas acabada en fin: ";
        cin >> texto;

    primera=texto;

    while(texto!="fin"){
        if(busca(primera, texto)){
            cout << texto;
        }
        cin >> texto;
    }

return 0;
}
