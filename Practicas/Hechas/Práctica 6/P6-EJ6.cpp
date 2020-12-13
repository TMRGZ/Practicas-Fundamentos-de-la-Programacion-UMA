//Miguel Angel Ruiz     15/12/16    Numeros complejos
#include<iostream>
using namespace std;

struct TComplejo{
    double p_real;
    double p_imaginaria;
};

void introducirComplejos(TComplejo& complejo){
    cout << "A continuacion introduzca la parte real: ";
        cin >> complejo.p_real;
    cout << "Ahora la imaginaria: ";
        cin >> complejo.p_imaginaria;
}

void sumar(TComplejo &resultado, const TComplejo &a, const TComplejo &b){
    resultado.p_real = a.p_real + b.p_real;
    resultado.p_imaginaria = a.p_imaginaria + b.p_imaginaria;
}
void restar(TComplejo &resultado, const TComplejo &a, const TComplejo &b){
    resultado.p_real = a.p_real - b.p_real;
    resultado.p_imaginaria = a.p_imaginaria - b.p_imaginaria;
}
void multiplicar(TComplejo &resultado, const TComplejo &a, const TComplejo &b){
    resultado.p_real = (a.p_real * b.p_real)-(a.p_imaginaria + b.p_imaginaria);
    resultado.p_imaginaria = (a.p_real * b.p_imaginaria) + (a.p_imaginaria * b.p_real);
}
void dividir(TComplejo &resultado, const TComplejo &a, const TComplejo &b){
    resultado.p_real = ((a.p_real*b.p_real)+(a.p_imaginaria*b.p_imaginaria))/((b.p_real*b.p_real)+(b.p_imaginaria*b.p_imaginaria));
    resultado.p_imaginaria = ((a.p_real*b.p_imaginaria)-(a.p_real*b.p_imaginaria))/((b.p_real*b.p_real)+(b.p_imaginaria+b.p_imaginaria));
}
void mostrarResultado(TComplejo& a){
    cout << a.p_real << "+" << a.p_imaginaria <<"i" << endl;
}

int main(){
    TComplejo a, b, resultado;

    cout << "Introduce dos numeros complejos: " << endl;
        introducirComplejos(a);
        introducirComplejos(b);

    cout << endl << "Resultados: " << endl;

    cout << "   Suma: ";
        sumar(resultado, a, b);
        mostrarResultado(resultado);
    cout << "   Resta: ";
        restar(resultado, a, b);
        mostrarResultado(resultado);
    cout << "   Multiplicacion: ";
        multiplicar(resultado, a, b);
        mostrarResultado(resultado);
    cout << "   Division: ";
        dividir(resultado, a, b);
        mostrarResultado(resultado);

return 0;
}
