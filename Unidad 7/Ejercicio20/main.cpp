#include <iostream>

using namespace std;
/*
Dadas dos listas de 5 números cada una y sin números repetidos, cargarlas en
dos vectores. Generar un tercer vector que contenga los elementos de ambos
vectores intercalados. Mostrar en pantalla el nuevo vector.
Vector 1: [8, 10, -3, 5, 7]
Vector 2: [20, -8, 10, 9, 3]
Vector 3: [8, 20, 10, -8, -3, 10, 5, 9, 7, 3]
*/
int main()
{
    int vectorNumeros1[5], vectorNumeros2[5], vectorNumerosFinal[10], contador;

    cout << "Primer vector: " << endl;
    for(int i=0; i<5; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> vectorNumeros1[i];
    }

    cout << "Segundo vector: " << endl;
    for(int i=0; i<5; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> vectorNumeros2[i];
    }


    for(int i=0; i<5; i++)
    {
        vectorNumerosFinal[i*2] = vectorNumeros1[i];
        vectorNumerosFinal[i*2+1] = vectorNumeros2[i];
    }



    cout << "Vector Final: " << endl;
    for(int i=0; i<10; i++)
    {
        cout << "[" << vectorNumerosFinal[i] << "] ";
    }
    return 0;
}
