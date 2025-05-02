#include <iostream>
using namespace std;
/*
Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, informar los 2 mayores valores ingresados, aclarando cual es el
máximo y cuál el que le sigue.
Ejemplo: 10, 8, 12, 14, 3, 0 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14, 3, 0 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2, 0 el resultado será -2 y -4

*/

int main(){
    int numero, maximo, segundoMaximo;
    bool hayMaximo=false, haySegundoMax=false;

    cout<<"Ingrese un numero: "; cin>>numero;
    while(numero!=0)
    {
        if(!hayMaximo)
        {
            maximo=numero;
            hayMaximo=true;
        }
        else
        {
            if(numero>maximo)   //si el numero es mayor al maximo
            {
                segundoMaximo=maximo;   //muevo el maximo a segundo maximo
                maximo=numero;
            }
            else if(!haySegundoMax) //si no hay segundo maximo
            {
                segundoMaximo=numero;
                haySegundoMax=true;
            }
            else   //si hay segundo maximo
            {
                if(numero>segundoMaximo)// si el numero es mayor al segundo maximo
                {
                    segundoMaximo=numero;
                }
            }
        }
        cout<<"Ingrese un numero: "; cin>>numero;

    }
    cout<<"Primer maximo: "<<maximo<<". Segundo Maximo: "<<segundoMaximo;

    return 0;
}
