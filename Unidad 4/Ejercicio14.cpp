#include <iostream>
using namespace std;
/*
Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, informar si todos están ordenados en forma creciente. En caso
de haber dos números “empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto
Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No
Ordenado”
*/

int main(){
    int numero, numeroAnterior;
    bool ordenado=true;
    cout<<"Ingrese un numero: "; cin>>numero;
    numeroAnterior=numero;
    while(numero!=0)
    {
        if(numero<numeroAnterior){
            ordenado=false;
        }
        numeroAnterior=numero;
        cout<<"Ingrese un numero: "; cin>>numero;
    }
    if(ordenado)
        cout<<"Conjunto ordenado.";
    else
        cout<<"Conjunto desordenado.";
    return 0;
}
