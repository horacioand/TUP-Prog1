#include <iostream>

using namespace std;
/*
Dada una lista de 20 números enteros, cargarlos en un vector. Determinar e
informar con un cartel aclaratorio si el vector está ordenado estrictamente en
forma creciente. Por ejemplo: el vector [1, 3, 5, 7, 9] está ordenado
estrictamente. El vector [1, 5, 3, 7] no lo está.
*/
int main()
{
    int numeros[20];
    bool ordenados=true;

    for(int i=0; i<20; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }

    for(int i=1; i<20; i++)
    {
        if(numeros[i]<=numeros[i-1]) //si el numero actual es menor que el anterior no estan ordenados, puede ser igual
        {
            ordenados=false;
            break;
        }

    }

    if(ordenados)
    {
        cout << "El vector esta ordenado de forma creciente.";
    }
    else
    {
        cout << "El vector NO esta ordenado de forma creciente.";
    }
    return 0;
}
