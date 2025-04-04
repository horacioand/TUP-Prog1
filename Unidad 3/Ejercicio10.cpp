#include <iostream>
using namespace std;

/*
 Hacer un programa para ingresar una lista de 10 n�meros enteros, luego
informar el m�ximo y la posici�n del m�ximo en la lista. En caso de �empates�
considerar la primera aparici�n.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Listar� M�ximo 35 Posici�n 7.
Ejemplo B: 5, -10, 2, 8, 25, 13, 55, -8, 55, 9. Listar� M�ximo 55 Posici�n 7.
Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Listar� M�ximo -6 Posici�n 8.
El tercer ejemplo demuestra que NO SIEMPRE en una lista de n�meros el
m�ximo es un positivo.
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
