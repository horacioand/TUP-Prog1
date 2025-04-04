#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 10 n�meros, luego informar el
m�ximo y el m�nimo.
Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listar� M�ximo 42 M�nimo -15.
Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listar� M�ximo 42 M�nimo 5.
Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listar� M�ximo -5 M�nimo
-42.
Observe que los tres ejemplos dejan en claro que la suposici�n de que el
m�ximo �seguramente� es un positivo y el m�nimo �seguramente� es un
negativo, queda totalmente descartada.

*/

int main(){
//Declaracion
    int numero, maximo, minimo;

    //Ingreso de primer valor para establecerlo como maximo y minimo
    cout<<"Ingrese un valor: ";
    cin>>numero;
    maximo=numero;
    minimo=numero;

    for(int i=1; i<10; i++){
        //Ingreso
        cout<<"Ingrese un numero: ";
        cin>>numero;

        //Proceso
        if(numero>maximo)
            maximo=numero;
        if(numero<minimo)
            minimo=numero;
    }
    //Egreso
    cout<<"Maximo: "<<maximo<<endl<<"Minimo: "<<minimo<<endl;


    return 0;
}
