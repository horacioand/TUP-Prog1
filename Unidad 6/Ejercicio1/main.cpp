#include <iostream>

using namespace std;
/*
Hacer una función llamada EsPar que determine si un número es par o no. La
función debe recibir un número entero por valor y devolver true si es par o false
si no lo es. La función no debe mostrar nada por pantalla.
Hacer un programa para ingresar un número y, utilizando EsPar, emita luego un
cartel indicando si el número ingresado es par o no es par.
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

