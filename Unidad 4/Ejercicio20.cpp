#include <iostream>
using namespace std;
/*
Dada una lista de números que finaliza cuando se ingresa un cero, informar el
primer número par ingresado y su ubicación en la lista y el último de los
números primos y su ubicación en la lista.
Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa Primer número par: 4 ubicación 2.
Último primo: 13 ubicación 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa Primer número par: 6 ubicación 7.
Último primo: 13 ubicación 5.
*/
int main(){
    int numero, primerPar, ubicacionPar, ultimoPrimo, ubicacionPrimo, ciclo=1;
    bool hayPar=false;
    cout<<"Ingrese un numero: "; cin>>numero;
    while(numero!=0)
    {
        if(numero%2==0&&!hayPar){
            primerPar=numero;
            ubicacionPar=ciclo;
            hayPar=true;
        }
        int cicloPrimo=1, contadorPrimo=0;
        while(cicloPrimo<=numero){
            if(numero%cicloPrimo==0){
                contadorPrimo++;
            }
            cicloPrimo++;
        }
        if(contadorPrimo==2){
            ultimoPrimo=numero;
            ubicacionPrimo=ciclo;
        }
        ciclo++;
        cout<<"Ingrese un numero: "; cin>>numero;
    }
    cout<<"Primer par: "<<primerPar<<". Ubicacion: "<<ubicacionPar<<endl;
    cout<<"Ultimo primo: "<<ultimoPrimo<<". Ubicacion: "<<ubicacionPrimo<<endl;
    return 0;
}
