#include <iostream>

using namespace std;
/*
Hacer una funci�n llamada EsPar que determine si un n�mero es par o no. La
funci�n debe recibir un n�mero entero por valor y devolver true si es par o false
si no lo es. La funci�n no debe mostrar nada por pantalla.
Hacer un programa para ingresar un n�mero y, utilizando EsPar, emita luego un
cartel indicando si el n�mero ingresado es par o no es par.
*/
int esPar(int a)
{
    return a % 2 == 0 ;  //Si resultado es 0 devuelve true, si no devuelve false
}

int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if(esPar(numero)){
        cout<<"El numero ingresado es par ("<<numero<<")";
    }else{
        cout<<"El numero ingresado es impar ("<<numero<<")";
    }
        return 0;
}

