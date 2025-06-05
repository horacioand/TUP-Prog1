#include <iostream>

using namespace std;
/*
Hacer un programa para ingresar las encuestas de edad efectuadas a 200
personas y luego listar la cantidad de personas en cada rango de edad según la
siguiente tabla.
Década 0. (Edad 1-9) Cantidad de encuestados: 99
Década 1. (Edad 10-19) Cantidad de encuestados: 99
……………………………
Década 9. (Edad 90-99) Cantidad de encuestados: 99
*/
int main()
{
    const int LARGO_VECTOR = 200;
    int vectorEdades[LARGO_VECTOR], vectorDecadas[11] = {0}, decada;

    for(int i=0; i<LARGO_VECTOR; i++)
    {
        cout << "Ingrese una edad: ";
        cin >> vectorEdades[i];
    }

    for(int i=0; i<LARGO_VECTOR; i++)
    {
        if(vectorEdades[i]>0 && vectorEdades[i]<100)
        {
            decada = vectorEdades[i] / 10;
            vectorDecadas[decada]++;
        }
        else
        {
            vectorDecadas[10]++;
        }
    }

    cout << "Cantidad de encuestados por decada: " << endl;
    for(int i=0; i<10; i++)
    {
        cout << "Decada " << i << ":" << vectorDecadas[i] << endl;
    }
    if(vectorDecadas[10]>0)
    {
        cout << "Fuera de rango: " << vectorDecadas[10];
    }
    return 0;
}
