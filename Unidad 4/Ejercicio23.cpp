#include <iostream>
using namespace std;
/*
Dada una lista de n�meros que finaliza cuando se ingresa un n�mero divisible
por 7, informar cual es el ante�ltimo y �ltimo n�mero impar ingresado.
Ejemplo 8, 4, -5, 6, 10, 5, 18, 14 se informa -5 y 5.
Nota: Contemplar la posibilidad que podr�a no haber n�meros impares en la
lista.
*/

int main(){
    int numero=1, ultimoImpar, anteUltimoImpar, contadorImpar=0;

    while(numero%7!=0){
        cout<<"Ingrese un numero: "; cin >> numero;

        if(numero%2!=0){
            if(contadorImpar>=1){
                anteUltimoImpar=ultimoImpar;
            }

            ultimoImpar=numero;
            contadorImpar++;
        }

    }
    if(contadorImpar==1){
        cout<< "Ultimo impar: "<<ultimoImpar<<". Anteultimo Impar: no ingresado";
    }else if(contadorImpar>1){
        cout<< "Ultimo impar: "<<ultimoImpar<<". Anteultimo Impar: "<<anteUltimoImpar;
    }else{
        cout<< "No se ingresaron numeros impares.";
    }


    return 0;
}
