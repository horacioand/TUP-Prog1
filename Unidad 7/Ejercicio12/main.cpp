#include <iostream>

using namespace std;
/*
Dada una lista de 10 n�meros, cargarlos en un vector. Luego ingresar un
n�mero e informar la cantidad de veces que ese n�mero aparece en el vector
*/
int main()
{
    int vectorNumeros[10], numero, contadorNumeros=0;

    for(int i=0; i<10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> vectorNumeros[i];
    }

    cout << "Ingrese un numero para buscar coincidencias dentro del vector: ";
    cin >> numero;

    for(int i=0; i<10; i++)
    {
        if(numero==vectorNumeros[i])
        {
            contadorNumeros++;
        }
    }

    cout << "El numero " << numero << " aparece " << contadorNumeros << " veces dentro del vector.";
    return 0;
}
