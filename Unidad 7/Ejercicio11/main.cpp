#include <iostream>

using namespace std;
/*
Dada una lista de 10 números, cargarlos en un vector. Luego ingresar un
número e informar el primer índice donde ese número aparece en el vector. En
caso de no aparecer se mostrará el valor índice igual a -1.
*/
int main()
{
    int numero, vectorNumeros[10], indice=-1;

    for(int i=0; i<10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> vectorNumeros[i];
    }

    cout << "Ingrese un numero para buscar en el vector ingresado: ";
    cin >> numero;

    for(int i=0; i<10; i++)
    {
        if(numero == vectorNumeros[i])
        {
            indice = i;
            break;
        }
    }

    if(indice == -1)
    {
        cout << "El numero ingresado no se encuentra dentro del vector...";
    }
    else
    {
        cout << "El numero ingresado aparece en el indice " << indice << endl;
    }


    return 0;
}
