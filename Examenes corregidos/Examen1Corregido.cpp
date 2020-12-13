#include <iostream>
using namespace std;
const double TOPE = 0.01;

double leer(){
    double num;
    do{
        cout<<"Introduce un numero mayor que cero y menor o igual que 1:";
            cin>>num;

    }while((num<=0)||(num>1));

return num;
}

double parte1_termino(unsigned exp){
    double nume=1.0;
    double den=1.0;

    for (unsigned i=1; i<=exp-2; i=i+2){
        nume=nume*i;
    }
    for (unsigned j=2; j<=exp-1; j=j+2){
        den=den*j;
    }

return (nume/den);
}

double potencia (double x, unsigned exp){
    double pot = 1.0;

    for (unsigned i=1; i<=exp; i++){
        pot*=x;
    }

return pot;
}

double parte2_termino(unsigned exp, double x){

return (potencia(x,exp)/exp);
}

double termino(unsigned exp, double x){
    if(((exp%2)==0)||(exp<3)){
        throw "ERROR.";
    }else{
        return (parte1_termino(exp) * parte2_termino(exp,x));
    }
}


int main(){
    double x,s,term;
    unsigned exp;

    x=leer();
    s=x;
    exp=3;
    term=x;

    while (term>=TOPE){
        term = termino(exp,x);
        s+=term;
        exp+=2;
    }

    cout << "La suma es: " << s << endl;

return 0;
}

