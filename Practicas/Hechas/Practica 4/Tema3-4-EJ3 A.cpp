// Miguel Angel Ruiz    17/11/2016  Numeros amigos A
#include<iostream>
using namespace std;

unsigned leerDatos1(){
    unsigned n1;

    cout << "Introduzca el primer numero: ";
        cin >> n1;

    return n1;
}
unsigned leerDatos2(){
    unsigned n2;

    cout << "Ahora el segundo: ";
        cin >> n2;

    return n2;
}
unsigned divisoresNumero1(unsigned num1){
    unsigned sumanum1=0;

    for (unsigned divisornum1=1; divisornum1<num1; divisornum1++){
        if (num1%divisornum1==0){
            sumanum1 = sumanum1+divisornum1;
        }
    }
    return sumanum1;
}
unsigned divisoresNumero2(unsigned num2){
    unsigned sumanum2=0;

    for (unsigned divisornum2=1; divisornum2<num2; divisornum2++){
        if (num2%divisornum2==0){
            sumanum2 = sumanum2+divisornum2;
        }
    }
    return sumanum2;
}
void comprobarAmigos(unsigned num1, unsigned num2){
    if ((divisoresNumero1(num1)==num2)&&(divisoresNumero2(num2)==num1)){
        cout << "Los numeros son amigos";
    }else{
        cout << "Los numeros no son amigos";
    }
}
int main(){
    unsigned num1, num2;

    num1 = leerDatos1();
    num2 = leerDatos2();
    comprobarAmigos(num1, num2);

    return 0;
}
