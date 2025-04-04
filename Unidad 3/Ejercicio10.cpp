#include <iostream>
using namespace std;

/*
 Hacer un programa para ingresar una lista de 10 números enteros, luego
informar el máximo y la posición del máximo en la lista. En caso de “empates”
considerar la primera aparición.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Listará Máximo 35 Posición 7.
Ejemplo B: 5, -10, 2, 8, 25, 13, 55, -8, 55, 9. Listará Máximo 55 Posición 7.
Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Listará Máximo -6 Posición 8.
El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el
máximo es un positivo.
*/

int main(){
//Declaracion
    int numero, maximo, posicionMaximo=1;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    maximo=numero;

    for(int i=1; i<10; i++){
        //Ingreso
        cout<<"Ingrese un numero: ";
        cin>>numero;

        //Proceso
        if(numero>maximo){
            maximo=numero;
            posicionMaximo=i+1;
        }
    }
    cout<<"El numero mas grande es "<<maximo<<" en la posicion "<<posicionMaximo<<endl;


    return 0;
}
