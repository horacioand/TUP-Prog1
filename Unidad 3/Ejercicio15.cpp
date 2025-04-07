#include <iostream>
using namespace std;
/*
 Hacer un programa para ingresar una lista de 8 n�meros y luego informar si
todos est�n ordenados en forma creciente. En caso de haber dos n�meros
�empatados� considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo A: -10, 1, 5, 7, 15, 18, 20, 23 se emitir� un cartel: �Conjunto Ordenado�
Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33 se emitir� un cartel: �Conjunto Ordenado�
Ejemplo C: 10, 1, 15, 7, -15, 18, 20, 23 se emitir� un cartel: �Conjunto No
Ordenado�
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 17
*/

int main(){
    //Declaracion
    int numero, anterior;
    bool orden=true;

    cout<<"Ingrese un numero: ";
    cin>>anterior;
    for(int i=0; i<7; i++){
        //Ingreso
        cout<<"Ingrese un numero: ";
        cin>>numero;

        //Proceso
        if(numero>=anterior){
            anterior=numero;
        }else{
            orden=false;
        }
    }


    if(orden){
        cout<<"Conjunto Ordenado.";
    }else{
        cout<<"Conjunto No Ordenado.";
    }

    return 0;
}
