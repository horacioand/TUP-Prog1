#include <iostream>
using namespace std;
/*
 Se ingresa una lista de 10 números enteros y se pide determinar si la lista está
formada por todos números alternados entre pares e impares o impares y
pares.
Ejemplo A: 8, 7, 10, -5, 20, 3, -10, 5, -10, -7 se lista el cartel “Alternados”.
Ejemplo B: 5, 12, -5, 10, 13, 40, -11, 6, -7, -6 se lista el cartel “Alternados”.
Ejemplo C: 5, 5, -5, 10, 10, 40, -11, 6, -7, -6 se lista el cartel “No Alternados”.
*/

int main()
{
    int numero;
    bool anteriorPar, orden=true;   //anteiorPar: si es true es par
    for(int i=0; i<10; i++)
    {
        cout<<"Ingrese un numero: ";
        cin>>numero;
        if(i==0)
        {
            if(numero%2==0)
                anteriorPar=true;
            else
                anteriorPar=false;
        }
        else
        {
            if(numero%2==0 && anteriorPar) //si el numero actual es par y el anterior es par
            {
                orden=false;
            }
            else if(numero%2==1 && !anteriorPar) //si el numero es impar y el anterior impar
            {
                orden=false;
            }
            anteriorPar = !anteriorPar;
        }
    }

    if(orden)
    {
        cout<<"Alternados";
    }
    else
    {
        cout<<"No alternados";
    }
    return 0;
}
