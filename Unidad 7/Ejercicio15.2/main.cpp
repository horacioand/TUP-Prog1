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
    int vectorNumerosIngreso[5], vectorNumerosEgreso[9];


    //ingreso de 5 numeros
    for(int i=0; i<5; i++)
    {
        cout << "Ingrese un numero: "; cin >> vectorNumerosIngreso[i];
    }

    //contador para iterar dos veces dentro del ciclo
    int contador = 0;
    for(int i=0; i<4; i++)
    {
        vectorNumerosEgreso[contador] = vectorNumerosIngreso[i];
        contador++;
        vectorNumerosEgreso[contador] = (vectorNumerosIngreso[i] + vectorNumerosIngreso[i+1]) / 2;
        contador++;
    }
    vectorNumerosEgreso[contador] = vectorNumerosIngreso[4];

    cout << "Vector intercalado: " << endl;
    for(int i=0; i<9; i++)
    {
        cout << "[" << vectorNumerosEgreso[i] << "] ";
    }

    return 0;
}
