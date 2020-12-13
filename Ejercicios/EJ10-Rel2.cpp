#include<iostream>
using namespace std;

void inverso(){
    char car;

    car=cin.get();
    if(car!='.'){
        inverso();
        cout << car;
    }else{
        cout << car;
    }
}
int main(){

    cout << "Introduzca una cadena de caracteres acabada en .: ";
    inverso();


}
