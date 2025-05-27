#include <iostream>

using namespace std;
/*
Dada una lista de 5 números, cargarlos en un vector. Armar luego otro vector
de 9 elementos donde por cada 2 elementos del vector original intercale el
promedio de ellos. Por ejemplo: [2, 4, 6, 8, 10], el vector queda: [2, 3, 4, 5, 6, 7,
8, 9, 10].
*/
int main()
{
    int vectorNumeros[5], vectorConPromedios[9], auxPromedio;

    for(int i=0; i<5; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> vectorNumeros[i];
    }

    int contador = 0;
    for(int i=0; i<4; i++)
    {

        vectorConPromedios[contador] = vectorNumeros[i];
        contador++;
        vectorConPromedios[contador] = (vectorNumeros[i] + vectorNumeros[i+1]) / 2;
        contador++;

    }
    vectorConPromedios[contador] = vectorNumeros[4];
    for(int i=0; i<9; i++)
    {
        cout << "Posicion " << i << ": " << vectorConPromedios[i] << endl;
    }

    return 0;
}
