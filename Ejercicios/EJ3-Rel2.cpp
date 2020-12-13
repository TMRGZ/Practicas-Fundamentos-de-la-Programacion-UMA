#include<iostream>
using namespace std;


const unsigned MAX=10;
typedef unsigned TArray[MAX];
bool estaContenido(const TArray& a, int num){
    unsigned i = 0;

    while ((i<MAX)&&(a[i]!=num)){
        i++;
    }
return (i<MAX);
}


int main(){

    TArray a={1,4,5,7,8,9,3};
    unsigned num;

    cout << "Introduzca un numero: ";
        cin >> num;

    if(estaContenido(a, num)){
        cout << "Esta contenido";
    }else{
        cout << "No esta contenido";
    }

return 0;
}
