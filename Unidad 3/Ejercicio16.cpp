#include <iostream>
using namespace std;
/*
Hacer un programa para ingresar 5 n�meros, luego informar los 2 mayores
valores ingresados, aclarando cual es el m�ximo y cu�l el que le sigue.
Ejemplo A: 10, 8, 12, 14, 3 el resultado ser� 14 y 12.
Ejemplo B: 14, 8, 12, 14 ,3 el resultado ser� 14 y 14.
Ejemplo C: -4, -8, -12, -20, -10 el resultado ser� -4 y -8
Ejemplo D: 100, 20, 5, -15, 70, el resultado ser� 100 y 70.
Ejemplo E: -100, -20, -5, 15, -70, el resultado ser� 15 y -5.
Se recomienda probar el diagrama que vaya a desarrollar con todos los ejemplos, en
particular el Ejemplo D, en el cual el m�ximo de la lista aparece en el primer lugar y
que si no se tiene precauci�n puede llevar a resultados como 100 como m�ximo y
100 como segundo m�ximo. �ESO ES INCORRECTO! El resultado debe ser 100 y 70.
*/

int main(){
    //Ingreso
    int numero, maximo=-99999, segundoMaximo=-99999;

    //bool hayMax=false, haySegundoMax=false;


    for(int i=0; i<5; i++){
        cout<<"Ingrese un numero: ";
        cin>>numero;

        /*if(!hayMax || numero>maximo){
            segundoMaximo=maximo;
            maximo = numero;
            hayMax=true;
        }else{
            if(!haySegundoMax || numero>segundoMaximo){
                segundoMaximo = numero;
                haySegundoMax=true;
            }
        }*/

        if(numero>maximo){
            segundoMaximo=maximo;
            maximo=numero;
        }else if(numero>segundoMaximo){
            segundoMaximo=numero;
        }
    }
    cout<<"Primer maximo: "<<maximo<<endl<<"Segundo Maximo: "<<segundoMaximo<<endl;



    return 0;
}
