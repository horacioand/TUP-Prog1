#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 10 números, luego informar
cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.
*/

int main(){
//Declaracion de variables
    int numero, conPos=0, conNeg=0, conCero=0;

//Ingreso - proceso
    for(int i=0; i<10; i++){
        cout<<"Ingrese un numero: ";
        cin>>numero;
        if(numero>0){
            conPos++;
        }else if(numero<0){
            conNeg++;
        }else{
            conCero++;
        }
    }
//Egreso
    cout<<endl;
    cout<<"Cantidad de positivos: "<<conPos<<endl<<"Cantidad de negativos: "<<conNeg<<endl<<"Cantidad de ceros: "<<conCero<<endl;

    return 0;
}
