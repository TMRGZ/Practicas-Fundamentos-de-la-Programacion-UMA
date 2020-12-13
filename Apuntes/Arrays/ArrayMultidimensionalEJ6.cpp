#include<iostream>
using namespace std;

const unsigned MAX=50;
typedef unsigned Tvector[MAX];

void convertir (unsigned num, unsigned base, Tvector& v){
    unsigned i=MAX-1;

    while (num!=0){
        v[i]=num%base;
        num= num/base;
        i--;
    }
}
void escribirVector(const Tvector& v){
    unsigned j=0;

    while ((j<MAX)&&(v[j]==0)){
        j++;
    }
    for(unsigned i=j; i<MAX; i++){
        cout << v[i];
    }
}
int main(){
    Tvector v={0};
    int num;
    int base;

    cout << "Introduzca un numero en decimal: ";
        cin >> num;

    do{
        cout << "Introduzca la base entre 2 y 9: ";
            cin >> base;
    }while((base<2)||(base>9));

    convertir(num, base, v);

    cout << "El numero en binario es: "; escribirVector(v);


return 0;
}
