#include <iostream>

using namespace std;
/*
Hacer un programa para ingresar 10 números y guardarlos en un vector.
Determinar e informar cuál es la suma de los valores del vector.
*/
int main()
{
    int numeros[10], acumulador=0;

    for(int i=0; i<10; i++)
    {
        cout<<"Ingrese un numero:";
        cin >> numeros[i];
    }

    for(int i=0; i<10; i++)
    {
        acumulador += numeros[i];
    }

    cout << "La suma de todos los numeros ingresados da como resultado: " << acumulador << endl;
    return 0;
}
