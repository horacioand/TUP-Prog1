#include <iostream>

using namespace std;
/*
Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el
valor máximo absoluto del vector. Por ejemplo 20, -43 y 5, el máximo absoluto
es -43.
*/
int main()
{
    int numeros[10], valorMaximo;

    for(int i=0; i<10; i++)
    {
        cout << "Ingrese un numero: "; cin >> numeros[i];
    }

    valorMaximo = numeros[0];

    for(int i=1; i<10; i++)
    {
        if(numeros[i]<0)
        {
            if((numeros[i]*-1)>valorMaximo){
                valorMaximo = numeros[i];
            }
        }
        else
        {
            if(numeros[i]>valorMaximo && numeros[i]>valorMaximo*-1)
            {
                valorMaximo = numeros[i];
            }
        }
    }

    cout << "Valor maximo absoluto: " << valorMaximo;
    return 0;
}
