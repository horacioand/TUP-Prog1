#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar por teclado un número y luego emitir por
pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
Importante: Verifique que el programa emita UN SOLO CARTEL*/
    int numero;
    cout<<"Determinar si un numero es positivo, negativo o cero."<<endl;
    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;
    if(numero>0){
        cout<<"El numero es positivo"<<endl;
    }else if(numero<0){
        cout<<"El numero es negativo"<<endl;
    }else{
        cout<<"El numero es cero"<<endl;
    }

    return 0;
}
