#include <iostream>
using namespace std;
/*
Dada una lista de números que finaliza cuando se ingresa un cero, informar cual
es el primer y segundo número impar ingresado. Ejemplo 8, 4, 5, 6, -9, 5, 7, 0 se
informa 5 y -9

*/

int main()
{
    int numero, primerImpar, segundoImpar;
    bool hayImpar=false, haySegundoImpar=false;

    cout<<"Ingrese un numero";
    cin>>numero;
    while(numero!=0)
    {
        if(!hayImpar)
        {
            if(numero%2!=0)
            {
                primerImpar=numero;
                hayImpar=true;
            }
        }
        else if(!haySegundoImpar)
        {
            if(numero%2!=0)
            {
                segundoImpar=numero;
                haySegundoImpar=true;
            }
        }

        cout<<"Ingrese un numero";
        cin>>numero;
    }

    cout<<"Primer impar: "<<primerImpar<<endl<<"Segundo Impar: "<<segundoImpar<<endl;

    return 0;
}
