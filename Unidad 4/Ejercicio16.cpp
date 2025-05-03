#include <iostream>
using namespace std;
/*
Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresan dos números consecutivos iguales, y luego informar el máximo.
Cuando se ingresa el número repetido el mismo debe ser descartado.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 22, 22. Se listará Máximo 35.
En este caso, el segundo número 22 no se analiza, solo sirve para finalizar el
ingreso.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 33, 33. Se listará Máximo 55.
En este caso, el segundo número 33 no se analiza, solo sirve para finalizar el
ingreso.
Ejemplo C: 5, 10, 20, 8, 55, 13, 55, -8, -5, 88, 88. Se listará Máximo 88.
En este caso, el segundo número 88 no se analiza, solo sirve para finalizar el
ingreso.
*/
int main(){
    int numero, numeroAnterior, maximo;
    cout<<"Ingrese un numero: "; cin>>numero;
    maximo=numero;
    while(numero!=numeroAnterior)
    {
        if(numero>maximo)
        {
            maximo=numero;
        }

        numeroAnterior=numero;
        cout<<"Ingrese un numero: "; cin>>numero;
    }
    cout<<"Maximo: "<<maximo;
    return 0;
}
