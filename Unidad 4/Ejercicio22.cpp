#include <iostream>
using namespace std;
/*
Hacer un programa que permita ingresar una lista de números positivos,
negativos o cero hasta que se ingrese el 5º número par.
Calcular e informar:
- La cantidad de ternas de números negativos ingresados de manera
consecutiva.
Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2
*/

int main()
{
    int numero, numero1=0, numero2=0, numero3=0, ternas=0, pares=0;
    bool hayTerna=false, vueltaExtra=false, primerVuelta=true, segundaVuelta=true;
    while(pares<5){
        cout<<"Ingrese un numero: ";
        cin >> numero;

        if(numero%2==0){
            pares++;
        }

        numero3=numero2;//sobreeescribo los valores anteriores
        numero2=numero1;
        numero1=numero;

        if(numero3 < 0 && numero2 < 0 && numero1 < 0){
            ternas++;
            numero3 = 0;
            numero2 = 0;
            numero1 = 0; //reinicio los valores anteriores
        }

    }
    cout<<"Cantidad de ternas negativas: "<<ternas;
    return 0;
}
