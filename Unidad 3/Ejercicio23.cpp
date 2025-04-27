#include <iostream>
using namespace std;
/*
Dada una lista de 10 n�meros enteros informar la cantidad de duplas de
n�meros impares que se hayan ingresado consecutivamente.
Ejemplo A: 12, 3, 5, 7, 6, 9, 13, 10, 7, -5.
En esta lista las duplas son: 3:5, 5:7, 9:13, 7:-5 por lo tanto se informar� que hay
4 duplas de n�meros impares ingresados consecutivamente.
Ejemplo B: 3, 5, 7, 10, 3, 5, 7, 10, 3, 5.
En esta lista las duplas son: 3:5, 5:7, 3:5, 5:7, 3:5 por lo tanto se informar� que
hay 5 duplas de n�meros impares ingresados consecutivamente.
Aclaraci�n: S�lo hay que listar la cantidad de duplas de impares. No hay que
mostrar c�mo est�n compuestas las duplas de n�meros.

*/

int main(){
    int numeroAnterior, numero, contadorDupla=0;
    cout<<"Inicio de programa..."<<endl;

    for(int i=0; i<10; i++){
        cout<<"Ingrese un numero: ";
        cin>>numero;

        if(!(i==0)){
            if(numeroAnterior%2!=0 && numero%2!=0){
                contadorDupla++;
            }
        }
        numeroAnterior=numero;
    }
    cout<<"La cantidad de duplas de impares es de: "<<contadorDupla;


    return 0;
}
