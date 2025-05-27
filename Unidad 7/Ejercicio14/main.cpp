#include <iostream>

using namespace std;
/*
Dada una lista de 10 números, cargarlos en un vector. Luego contar y listar la
cantidad de números primos que aparecen en el vector.
*/

int EsPrimo(int num)
{
    int contador=0;
    for(int x=1; x <= num; x++)
    {
        if(num%x==0)
        {
            contador++;
        }
    }

    if(contador==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int vectorNumeros[10], contadorPrimos=0;

    for(int i=0; i<10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> vectorNumeros[i];
    }

    for(int i=0; i<10; i++)
    {
        if(EsPrimo(vectorNumeros[i]))
        {
            contadorPrimos++;
        }
    }

    cout << "El vector contiene " << contadorPrimos << " numeros primos.";
    return 0;
}
