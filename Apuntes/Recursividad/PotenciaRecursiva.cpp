#include<iostream>
using namespace std;

unsigned potencia (unsigned x, unsigned n){
    unsigned res;

    if(n==0){
        res = 1;
    }else{
        res = x*potencia(n-1, x);
    }
return res;
}
