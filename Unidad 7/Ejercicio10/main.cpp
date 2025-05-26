#include <iostream>

using namespace std;
/*
Dada una lista de 20 números, cargarlos en un vector. Determinar e informar la
cantidad de “rupturas” que tiene el vector con respecto a un orden
estrictamente creciente. Ejemplo: el vector 1,3,4,2,4,4,6,8,1,7,9 tiene 3 rupturas.
*/
int main()
{
    int numeros[20], contadorRupturas=0;

    for(int i=0; i<20; i++)
    {
        cout << "Ingrese un numero: "; cin >> numeros[i];
    }

    for(int i=1; i<20; i++)
    {
        if(numeros[i]<=numeros[i-1])
        {
            contadorRupturas++;
        }
    }

    cout << "El vector tiene " << contadorRupturas << " rupturas";
    return 0;
}
