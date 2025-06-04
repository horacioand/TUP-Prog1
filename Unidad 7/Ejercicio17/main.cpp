#include <iostream>

using namespace std;
/* Dada una lista de 10 números, cargarlos en un vector. Luego detectar si en el
vector hay elementos repetidos y generar otro vector con los elementos
repetidos reemplazados por ceros.
Ejemplo Vector 1: [8, 20, 20, -7, 15, 12, 15, -5, 11, 18]
Ejemplo Vector 2: [8, 0, 0, -7, 0, 12, 0, -5, 11, 18]
*/
int main()
{
    int vectorNumeros[10], vectorNumerosModificado[10];

    for(int i=0; i<10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> vectorNumeros[i];
        vectorNumerosModificado[i] = vectorNumeros[i];
    }

    for(int i=0; i<10; i++)
    {
        for(int x=i+1; x<10; x++)
        {
            if(vectorNumeros[i]==vectorNumeros[x])
            {
                vectorNumerosModificado[x] = 0;
                vectorNumerosModificado[i] = 0;
            }
        }
    }

    cout << "Vector Original:   ";
    for(int i=0; i<10; i++)
    {
        cout<< "[" << vectorNumeros[i] << "] ";
    }
    cout << endl;

    cout << "Vector Modificado: ";
    for(int i=0; i<10; i++)
    {
        cout<< "[" << vectorNumerosModificado[i] << "] ";
    }

    return 0;
}
