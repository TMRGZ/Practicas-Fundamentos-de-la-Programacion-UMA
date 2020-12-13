//Fecha 03/11/2016  Alumno: Miguel Angel Ruiz   Tablero de ajedrez
#include <iostream>
using namespace std;

int main(){
    for(unsigned i=1; i<=8; i++){
        if(i%2==0){
            for(unsigned i=1; i<=4; i++){
                cout << " B " << " N ";
            }
        }else{
            for(unsigned i=1; i<=4; i++){
                cout << " N " << " B ";
            }
        }
    cout << endl;
    }

return 0;
}
