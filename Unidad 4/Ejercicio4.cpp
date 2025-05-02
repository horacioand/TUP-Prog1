#include <iostream>
using namespace std;
/*
 Hacer un programa para que el usuario ingrese un número positivo y que luego
se muestre por pantalla los números entre el 1 y el número ingresado por el
usuario. Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y
el 15.

*/

int main(){
    int numero, i=2;
    cout<<"Ingrese un numero: ";
    cin>>numero;

    while(i<numero){
        cout<<i<<endl;
        i++;
    }
    return 0;
}
