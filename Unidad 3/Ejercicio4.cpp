#include <iostream>
using namespace std;

/*
Hacer un programa para que el usuario ingrese un n�mero positivo y luego se
muestren por pantalla los n�meros entre el 1 y el n�mero ingresado por el
usuario.
Ejemplo. Si el usuario ingresa 15, se mostrar�n los n�meros entre el 1 y el 15.

*/

int main(){

//Declaracion de variables
    int numero;

//Ingreso
    cout<<"Ingrese un numero: ";
    cin>>numero;

//Proceso
    for(int i=2; i<numero; i++){
        cout<<i<<endl;
    }
    return 0;
}
