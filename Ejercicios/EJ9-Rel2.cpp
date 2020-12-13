#include<iostream>
using namespace std;


unsigned mcd(unsigned p, unsigned q){
    unsigned res;

    if (p!=q){
        if(p>q){
            res=mcd(p-q, q);
        }else{
            res=mcd(p, q-p);
        }
    }else{
        res=p;
    }
    return res;
}
int main(){

    unsigned num1, num2;

    cin >> num1;
    cin >> num2;

    cout << "El mcd de " << num1 << " y " << num2 << " es " << mcd(num1, num2);

    return 0;
}
