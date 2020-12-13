#include<iostream>
using namespace std;


const unsigned MAX=10;
typedef unsigned TArray[MAX];

void invertir(TArray& v){
    int temp;
    unsigned i, j;
    i=0;
    j=MAX-1;

    while (i<j){
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--; // falta escribir el invertido
    }
}
void leerVector(TArray& a){
    cout << "Introduzca " << MAX << " numeros: " << endl;
    for (unsigned i=0; i<MAX; i++){
        cin >> a[i];
    }
}
void escribirVector(const TArray& a){
    cout << "El contenido del array es: " << endl;

    for (unsigned i=0; i<MAX; i++){
        cout << a[i]<< " ";
    }
}

int main(){
    TArray a;
    leerVector(a);
    escribirVector(a);
    invertir(a);

return 0;
}
