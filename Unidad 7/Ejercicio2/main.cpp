#include <iostream>

using namespace std;
/*
Leer 10 números y guardarlos en un vector. Calcular el promedio y luego
mostrar por pantalla los valores que son mayores al promedio.
*/
int main()
{
    int numeros[10], acumulador=0, contador=0;
    float promedio;

    for(int i=0; i<10; i++)
    {
        cout << "Ingrese un numero:";
        cin >> numeros[i];
    }

    for(int i=0; i<10; i++)
    {
        acumulador+=numeros[i];
        contador++; //Utilizo contador por si se quiere modificar el tamaño del vector
    }

    promedio = (float)acumulador / contador;

    cout << "El promedio es: " << promedio << endl;

    for(int i=0; i<10; i++)
    {
        if(i==0)
        {
            cout << "Valores mayores al promedio: "<<endl;
        }
        if(numeros[i] > promedio){
            cout << numeros[i] << endl;
        }
    }

    return 0;
}
