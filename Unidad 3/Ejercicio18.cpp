#include <iostream>
using namespace std;
/*
Hacer un programa para ingresar un n�mero entero y luego informar todos los
divisores pares de ese n�mero.
Ejemplo A. Si se ingresa 6 se listar�: 2 y 6. Ejemplo B. Si se ingresa 8 se listar�:
2, 4 y 8. Ejemplo C. Si se ingresa 11 no se listar� nada.
*/

int main(){
    int numero;
    cout<<"Ingrese un numero entero: ";
    cin>>numero;
    cout<<"Divisores pares de "<<numero<<":"<<endl;

    for(int i=1; i<=numero; i++){
        if(numero%i==0){
            if(i%2==0)
                cout<<i<<endl;
        }

    }



    return 0;
}
