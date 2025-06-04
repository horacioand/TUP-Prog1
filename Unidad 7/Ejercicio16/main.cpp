#include <iostream>

using namespace std;
/*
Dada una lista de 10 números, cargarlos en un vector. Luego detectar si en el
vector hay algún elemento repetido y, en caso de haberlo, indicarlo con un
cartel “Hay Repetidos”
*/
int main()
{
    int vectorNumeros[10];
    bool hayRepetidos = false;

    for(int i=0; i<10; i++)
    {
        cout << "Ingrese un numero: "; cin >> vectorNumeros[i];
    }

    for(int i=0; i<10 && !hayRepetidos; i++)
    {
        for(int x=i+1; x<10; x++)
        {
            if(vectorNumeros[i]==vectorNumeros[x])
            {
                hayRepetidos = true;
                break;
            }
        }
    }

    if(hayRepetidos)
    {
        cout << "Hay numeros repetidos";
    }
    else
    {
        cout << "No hay numeros repetidos";
    }



    return 0;
}
