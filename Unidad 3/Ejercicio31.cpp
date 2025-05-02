#include <iostream>
using namespace std;
/*
Hacer un programa para ingresar 10 números, luego informar los 2 mayores
valores ingresados, aclarando cual es el máximo y cuál es el segundo máximo
descartando los números repetidos.
Ejemplo A: 10, 8,12, 78 ,55, 20, 12, 40, 31, 28 el resultado será 78 y 55.
Ejemplo B: -20, - 25, -3, -8, -50, -45, -20, -22, -15, -11 el resultado será -3 y -8.
Ejemplo C: 20, 20, 12, 9, 14, 14, 8, 8, 10, 3 el resultado será 20 y 14.
En el ejemplo C el valor 20 aparece dos veces, pero sólo se considera una vez.
*/

int main()
{
    int numero, maximo, segundoMaximo;
    bool hayMax=false, haySegundoMax=false;
    for(int i=0; i<10; i++)
    {
        cout<<"Ingrese un numero:";
        cin>>numero;
        //si no hay maximo
        if(!hayMax)
        {
            maximo=numero;
            hayMax=true;
        }
        //si hay maximo
        else
        {
            if(numero==maximo|| (haySegundoMax&&numero==segundoMaximo)){
                continue;
            }
            //si no hay segundo maximo y el numero es menor al maximo
            if(!haySegundoMax && numero<maximo)
            {
                segundoMaximo=numero;
                haySegundoMax=true;
            }
            //si no hay segundo maximo y el numero es mayor al maximo
            else if(!haySegundoMax && numero>maximo)
            {
                segundoMaximo=maximo;
                maximo=numero;
                haySegundoMax=true;
            }
            //si hay segundo maximo
            else
            {
                //si el numero es mayor al maximo
                if(numero>maximo)
                {
                    segundoMaximo=maximo;
                    maximo=numero;
                }
                //si el numero es menor al maximo y mayor al segundo maximo
                else if(numero<maximo && numero > segundoMaximo)
                {
                    segundoMaximo=numero;
                }
                //si el numero es menor a ambos no se realizan acciones
            }
        }

    }
    cout<<"Maximo: "<<maximo<<endl;
    cout<<"Segundo Maximo: "<<segundoMaximo<<endl;

    return 0;
}
