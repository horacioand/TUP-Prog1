#include <iostream>
using namespace std;
/*
Hacer un programa para mostrar por pantalla los números del 20 al 1 en orden
decreciente.
Importante: El programa no tiene ningún ingreso de datos.

*/

int main(){
    int numero=20;
    while(numero>=0){
        cout<<numero<<endl;
        numero-=1;
    }
    return 0;
}
