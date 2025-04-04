#include <iostream>
using namespace std;

/*
Dada una lista de 10 n�meros enteros informar cual es el m�ximo de los pares.
Ejemplo A: 2, 10, 20, 8, 25, 13, 36, - 8, -5, 20 se informa m�ximo: 36
Ejemplo B 5, -13, 23, 81, -55, -13, 55, 4, 15 ,-20 Se informa m�ximo: 4
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20 se informa m�ximo: -8
*/

int main(){
//Declaracion
    int numero, maxPar;
    bool hayMaxPar = false;

    for(int i=0; i<10; i++){
        //Ingreso
        cout<<"Ingrese un numero:";
        cin>>numero;

        //Proceso
        if(numero%2==0){
            if(!hayMaxPar||numero>maxPar){
                maxPar=numero;
                hayMaxPar=true;
            }
        }
    }

    //Egreso
    cout<<"Maximo par: "<<maxPar;
    return 0;
}
