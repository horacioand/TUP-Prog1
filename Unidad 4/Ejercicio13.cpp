#include <iostream>
using namespace std;
/*
Dada una lista de números que finaliza cuando se ingresa un cero, informar cual
es el primer y último número impar ingresado. Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se
informa -5 y 5
*/

int main(){
    int numero, primerImpar, ultimoImpar;
    bool hayPrimer=false;
    cout<<"Ingrese un numero: "; cin>>numero;
    while(numero!=0)
    {
        if(!hayPrimer){
            if(numero%2!=0)
            {
                primerImpar=numero;
                hayPrimer=true;
            }
        }else
        {
            if(numero%2!=0){
                ultimoImpar=numero;
            }
        }
        cout<<"Ingrese un numero: "; cin>>numero;

    }

    cout<<"Primer Impar: "<<primerImpar<<endl<<"Ultimo impar: "<<ultimoImpar<<endl;
    return 0;
}
