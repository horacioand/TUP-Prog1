#include <iostream>
using namespace std;
/*
Dada una lista de 7 números enteros informar el primer número par ingresado y
su ubicación en la lista y el último de los números primos y su ubicación en la
lista. Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa:
Primer número par: 4 ubicación 2. Último primo: 13 ubicación 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa:
Primer número par: 6 ubicación 7. Último primo: 13 ubicación 5.
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
