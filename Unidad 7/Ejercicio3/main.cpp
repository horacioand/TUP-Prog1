#include <iostream>

using namespace std;
/*
Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el
valor máximo y su posición dentro del vector.
*/
int main()
{
    int numeros[10], valorMaximo, posicionMaximo;

    for(int i=0; i<10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }

    valorMaximo = numeros[0];
    posicionMaximo = 1;

    for(int i=1; i<10; i++) //arranca en 1 porque el indice 0 ya lo establezco como maximo
    {
        if(numeros[i] > valorMaximo)
        {
            valorMaximo = numeros[i];
            posicionMaximo = i+1;
        }

    }

    cout << "Valor Maximo: " << valorMaximo << ". Posicion: " << posicionMaximo;
    return 0;
}
