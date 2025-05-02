#include <iostream>
using namespace std;
/*
Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, informar el máximo de los negativos y el mínimo de los
positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0.
Máximo Negativo: -3.
Mínimo Positivo: 2.
*/

int main(){
    int numero, maxNeg=0, minPos=0;
    bool hayPos=false, hayNeg=false;

    cout<<"Ingrese un numero: "; cin>>numero;
    while(numero!=0){
        if(numero>0){
            if(!hayPos)
            {
                minPos=numero;
                hayPos=true;
            }
            else
            {
                if(numero<minPos)
                    minPos=numero;
            }
        }
        if(numero<0){
            if(!hayNeg)
            {
                maxNeg=numero;
                hayNeg=true;
            }
            else
            {
                if(numero>maxNeg)
                {
                    maxNeg=numero;
                }
            }

        }
        cout<<"Ingrese un numero: "; cin>>numero;
    }
    cout<<"Maximo Negativo: "<<maxNeg<<endl;
    cout<<"Minimo Positivo: "<<minPos<<endl;

    return 0;
}
