#include <iostream>
//#include <stdlib.h>
using namespace std;

/*
Hacer un programa que permita ingresar una lista de números positivos,
negativos o cero hasta que la diferencia entre el máximo y el mínimo sea mayor
a 10. Calcular e informar:
- La cantidad de números que componen la lista.
Ejemplo A: 1, 4, 6, -10 → Cantidad de números: 4
Ejemplo B: 100, 104, 106, 100, 100, 105, 200 → Cantidad de
números: 7
*/

int main()
{
    int diferencia, numero, maximo, minimo, contador=0;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    maximo=numero;
    minimo=numero;
    diferencia = maximo-minimo;
    contador++;
    while(diferencia<=10)
    {
        cout<<"Ingrese un numero: ";
        cin>>numero;

        if(numero>maximo)
        {
            maximo=numero;
        }
        if(numero<minimo)
        {
            minimo=numero;
        }
        if(minimo<0)
            diferencia=maximo-minimo*-1;
        else
            diferencia=maximo-minimo;

        contador++;
    }
    cout<<"Cantidad de numeros ingresados: "<<contador<<endl;


    return 0;
}
