#include <iostream>

using namespace std;
/*
Dadas dos listas de 10 números cada una y sin números repetidos, cargarlas
en dos vectores. Generar un tercer vector que contenga solamente aquellos
elementos que están repetidos en ambos vectores. Mostrar en pantalla el
nuevo vector.
Vector 1: [8, 10, -3, 5, 7]
Vector 2: [10, -8, 5, 9, -3]
Vector 3: [10, -3, 5]
*/
int main()
{
    int vectorNumeros[10], vectorNumeros2[10], vectorNumeros3[10], contador=0;

    cout << "Primer vector, ingrese 10 numeros no repetidos: " << endl;
    for(int i=0; i<10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> vectorNumeros[i];
    }

    cout << "Segundo vector, ingrese 10 numeros no repetidos: " << endl;
    for(int i=0; i<10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> vectorNumeros2[i];
    }

    for(int i=0; i<10; i++)
    {
        for(int x=0; x<10; x++)
        {
            if(vectorNumeros[i] == vectorNumeros2[x])
            {
                vectorNumeros3[contador] = vectorNumeros[i];
                contador++;
            }
        }
    }

    cout << "Nuevo vector con numeros repetidos: " << endl;
    for(int i=0; i<contador; i++)
    {
        cout << "[" << vectorNumeros3[i] << "]";
    }
    return 0;
}
