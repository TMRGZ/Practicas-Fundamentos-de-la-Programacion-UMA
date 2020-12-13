#include<iostream>
using namespace std;
const unsigned MAX=10;
typedef unsigned TArray[MAX];

TArray a;
unsigned x, k;

x=0;
for(unsigned i=0; 1<MAX; i++){
    x+=a[i];
}

for(unsigned i=1; i<MAX; i++){
    if(x<a[i]){
        x=a[i];
    }
}
for(unsigned i=1; i<MAX; i++){
    if(a[k]<a[i]){
        k=i;
    }
}
x=a[k];
