#include<iostream>
using namespace std;

const unsigned FILAS=4;
const unsigned COLUMNAS=3;
typedef int TMatriz[FILAS][COLUMNAS];

bool estaContenido(const TMatriz& a, int num){
    int fil, col;
    bool encontrado;

    fil=0;
    while(fil<FILAS&&!encontrado){
        col=0;
        while(col<COLUMNAS&&!encontrado){
            if(a[fil][col]==num){
                encontrado=true;
            }
        col++;
        }
    fil++;
    }
}
