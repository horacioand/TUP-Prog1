#include <iostream>
using namespace std;
/*
Hacer un programa que muestre los números primos entre el 1 y el 10000. El
usuario no debe ingresar nada en este programa.

*/

int main(){
    int contador;
    for(int i=2; i<10000; i++){
        contador=0;
        for(int x=1; x<=i; x++){
            if(i%x==0){
                contador++;
            }
        }
        if(contador==2){
            cout<<i<<endl;
        }
    }


    return 0;
}
