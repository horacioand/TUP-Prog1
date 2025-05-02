#include <iostream>
using namespace std;
/*
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se
ingresa un cero, luego informar cu�ntos son positivos y cu�ntos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listar� Positivos: 4 Negativos: 2.
Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7.

*/

int main(){
    int numero, conPos=0, conNeg=0;
    cout<<"Ingrese el primer numero:";
    cin>>numero;
    while(numero!=0)
    {
        if(numero>0)
            conPos++;
        if(numero<0)
            conNeg++;
        cout<<"Ingrese un numero: ";
        cin>>numero;
    }
    cout<<"Positivos: "<<conPos<<". Negativos: "<<conNeg<<endl;
    return 0;
}
