#include<iostream>
using namespace std;


const unsigned MAX=26;
typedef unsigned TArray[MAX];

struct Vector{
    TArray datos;
    unsigned tam;
}
void calcularModa(const Vector& v, bool& encontrado, char& moda){

}


void escribirVector(const TArray& a){
    //cout << "El contenido del array es: " << endl;

    for (unsigned i=65; i<91; i++){
        cout << char(i);
    }
}
unsigned convertirCar(char car){
    return (int(car)-65);
}


int main(){
    Vector v;
    char car;
    unsigned num;

    leerVector(Vector &v);
    calcularModa

    cout << "Introduzca un texto en mayusculas acabado en . ";
        car=cin.get();
        while (car!='.'){
            if((car>='A')&&(car<='Z')){
                num = convertirCar(car);
                a[num]++;
            }
        car=cin.get();
        }
    cout << "La frecuencia de aparicion de las mayusculas es: ";
        escribirVector(a);

    return 0;
}
