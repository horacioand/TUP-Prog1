#include <iostream>
using namespace std;
/*
Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, luego informar cuántos son positivos y cuántos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.
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
