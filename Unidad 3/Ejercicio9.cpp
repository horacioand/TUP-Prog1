#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 10 números, luego informar el
máximo.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20. Se listará Máximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20. Se listará Máximo 55.
Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Se listará Máximo -6
El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el
máximo es un positivo.
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 9 y TP2 EJ 10.
*/

int main(){
//Declaracion de variables
    int numero, maximo, minimo;

//Ingreso - Proceso
    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;
    maximo=numero;
    minimo=numero;
    for(int i=0;i<9;i++){
        cout<<"Ingrese un numero: ";
        cin>>numero;
        if(numero<minimo){
            minimo=numero;
        }
        if(numero>maximo){
            maximo=numero;
        }
    }

//Egreso
    cout<<"Numero Maximo: "<<maximo;
    cout<<endl;
    cout<<"Numero Minimo: "<<minimo;

    return 0;
}
