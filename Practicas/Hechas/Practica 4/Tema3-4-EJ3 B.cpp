// Miguel Angel Ruiz    17/11/2016  Numeros amigos B
#include<iostream>
using namespace std;

void leerDatos(unsigned& n, unsigned& m){
    do{
        cout << "Introduzca un rango de datos para encontrar los numeros amigos." << endl;
        cout << "Introduzca el limite superior: ";
            cin >> m;
        cout << "Introduzca el inferior: ";
            cin >> n;
    }while(n>m);
}
unsigned divisoresM(unsigned m){
    unsigned sumaM=0;

    for (unsigned divisorM=1; divisorM<m; divisorM++){
        if (m%divisorM==0){
            sumaM = sumaM+divisorM;
        }
    }
    return sumaM;
}
unsigned divisoresN(unsigned n){
    unsigned sumaN=0;

    for (unsigned divisorN=1; divisorN<n; divisorN++){
        if (n%divisorN==0){
            sumaN = sumaN+divisorN;
        }
    }
    return sumaN;
}
bool comprobarAmigos(unsigned m, unsigned n){
    bool amigos = false;
    if ((divisoresM(m)==n)&&(divisoresN(n)==m)){
        amigos = true;
    }
    return amigos;
}
void darParejas(unsigned n, unsigned m){
    for (unsigned i=n; i<=m; i++){
        for (unsigned j=i+1; j<=m; j++){
           if(comprobarAmigos(i, j)){
                cout << i << " y " << j << " son amigos" << endl;
           }
        }
    }
}
int main(){
    unsigned m, n;

    leerDatos(n, m);
    darParejas(n, m);

return 0;
}
