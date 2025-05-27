#include <iostream>

using namespace std;
/*
Dada una lista de 10 números, cargarlos en un vector. Luego contar y listar la
cantidad de números pares que aparecen en el vector.
*/

int EsPar(int numero)
{
    return numero%2==0;
}

int main()
{
    int vectorNumeros[10], contadorPares=0;

    for(int i=0; i<10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> vectorNumeros[i];
    }

    for(int i=0; i<10; i++)
    {
        if(EsPar(vectorNumeros[i]))
        {
            contadorPares++;
            cout << vectorNumeros[i] << "   ";
        }
    }
    cout<<endl;
    cout << "El vector contiene " << contadorPares << " numeros pares.";

    return 0;
}
