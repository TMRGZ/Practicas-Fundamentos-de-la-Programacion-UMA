//Miguel Angel Ruiz     15/12/16    media alumnos
#include<iostream>
using namespace std;

const unsigned MAX=50;
typedef float TArray[MAX];

struct TEstaturas{
    TArray datos;
    unsigned tan;
};

void leerArray(TEstaturas& reg){
    cout << "Cuantos alumnos hay en la clase? ";
        cin >> reg.tan;

    for(unsigned i=0; i<reg.tan; i++){
        cout << "Introduzca la estatura en CM del alumno " << i+1 << ": ";
            cin >> reg.datos[i];
    }
}

float mediaAlumnos(const TEstaturas& reg){
    float sumamedia=0, mediaclase;

    for(unsigned i=0; i<reg.tan; i++){
        sumamedia=sumamedia+reg.datos[i];
    }
    mediaclase=sumamedia/reg.tan;

return mediaclase;
}

void superarMedia(const TEstaturas& reg, float m){
    unsigned mediamayor=0;
    unsigned mediamenor=0;

    for(unsigned i=0; i<reg.tan; i++){
        if((reg.datos[i])>m){
            mediamayor++;
        }
        if((reg.datos[i])<m){
            mediamenor++;
        }
    }
    cout << "Hay " << mediamenor << " alumnos mas bajos que el resto de la clase" << endl;
    cout << "Hay " << mediamayor << " alumnos mas altos que el resto de la clase" << endl;
}

int main(){
    float m;
    TEstaturas r;

    leerArray(r);
    m=mediaAlumnos(r);

    superarMedia(r, m);

return 0;
}
