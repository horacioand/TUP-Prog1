#include <iostream>
using namespace std;
/*
Dada una lista de 7 n�meros enteros informar el primer n�mero par ingresado y
su ubicaci�n en la lista y el �ltimo de los n�meros primos y su ubicaci�n en la
lista. Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa:
Primer n�mero par: 4 ubicaci�n 2. �ltimo primo: 13 ubicaci�n 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa:
Primer n�mero par: 6 ubicaci�n 7. �ltimo primo: 13 ubicaci�n 5.
*/

int main(){
    int numero, primerPar, ubicacionPar=0, ultimoPrimo, ubicacionPrimo=0, contador;
    bool hayPar=false;
    cout<<"Ingrese una lista de 7 numeros..."<<endl;
    for(int i=0; i<7;i++){
        cout<<"Ingrese un numero: ";
        cin>>numero;

        if(numero%2==0 && !hayPar){
            primerPar=numero;
            ubicacionPar=i+1;
            hayPar=true;
        }

        contador=0;
        for(int x=1; x<=numero; x++){
            if(numero%x==0){
                contador++;
            }
        }

        if(contador==2){
            ultimoPrimo=numero;
            ubicacionPrimo=i+1;
        }
    }
    cout<<"Primer numero par: "<<primerPar<<". Ubicacion: "<<ubicacionPar<<endl<<"Ultimo numero primo: "<<ultimoPrimo<<". Ubicacion: "<<ubicacionPrimo;

    return 0;
}
