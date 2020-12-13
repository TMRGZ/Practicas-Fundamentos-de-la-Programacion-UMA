//19/01/2017    Miguel Angel Ruiz   Notas
#include<iostream>
#include<string>
using namespace std;

const unsigned MAX=20;
const unsigned EVAL=3;

typedef double notasAlumno[EVAL];

struct TAlumnos{
    string nombre;
    notasAlumno notas;
};

typedef TAlumnos ArrayAlumnos[MAX];

unsigned leerAlumnos(){
    unsigned n;

    do{
        cout << "Introduce el numero de alumnos: ";
            cin >> n;
    }while(n>MAX);

return n;
}

void leerNombres(unsigned n, ArrayAlumnos& alumnos){

    for(unsigned i=0; i<n; i++){
        cout << "Introduce el nombre y 3 notas: ";
            getline(cin, alumnos[i].nombre, ' ');
            for(unsigned j=0; j<n; j++){
                cin >> alumnos[i].notas[j];
            }
    }
}

double notaMedia (unsigned n, const ArrayAlumnos& alumnos, unsigned evaluacion){
    double suma=0;

    for(unsigned i=0; i<n; i++){
        suma=suma+alumnos[i].notas[evaluacion-1];
    }
return suma/n;
}

void notasAlumnos(unsigned n, const ArrayAlumnos& alumnos){
    cout << "Alumno \t Nota 1 \t Nota 2 \t Nota 3" << endl;
    cout << "-------------------------------------------------------";

    for(unsigned i=0; i<n; i++){
        cout << alumnos[i].nombre << "\t";

        for(unsigned ev=1; ev<=EVAL; ev++){
            double media = notaMedia(n, alumnos, ev);

            if(alumnos[i].notas[ev-1]>=media){
                cout << "Aprobado \t";
            }else{
                cout << "Suspenso \t";
            }
        }
    cout << endl;
    }
}


int main(){
    unsigned n= leerAlumnos();

    ArrayAlumnos alumnos;
    leerNombres(n, alumnos);
    notasAlumnos(n, alumnos);

return 0;
}
