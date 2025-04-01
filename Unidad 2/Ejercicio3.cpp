#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar por teclado un número y luego informar por
pantalla con un cartel aclaratorio si el mismo es par o impar.
*/
    int numero;
    cout<<"Determinar si un numero es par."<<endl;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    if(numero%2==0){
        cout<<"El numero es par"<<endl;
    }else{
        cout<<"El numero es impar"<<endl;
    }

    return 0;
}
