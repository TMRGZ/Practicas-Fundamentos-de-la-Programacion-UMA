//Miguel Angel Ruiz     Producto recursivo

#include<iostream>
using namespace std;

unsigned producto(unsigned x, unsigned y){
    unsigned res;

    if(x==0||y==0){
        res=0;
    }else{
        res=x+producto(x,y-1);
    }
return res;
}


int main(){
    unsigned x, y;

    cout << "Introduce el primer factor: ";
        cin >> x;
    cout << "Introduce el segundo factor: ";
        cin >> y;

    cout << "El resultado es: " << producto(x,y);

return 0;
}
