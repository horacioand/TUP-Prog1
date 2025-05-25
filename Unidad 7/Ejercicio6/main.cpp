#include <iostream>

using namespace std;
/*
Leer 10 números y guardarlos en un vector. Determinar e informar los dos
últimos números pares en el vector y sus respectivas posiciones en el mismo.
Suponer que habrá al menos dos números pares.
*/
int EsPar(int numero)
{
    return numero%2==0;
}
int main()
{
    int numeros[10];
    int ultimoPar, penultimoPar, posUltimoPar, posPenultimoPar;
    bool hayPar=false;

    for(int i=0; i<10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }

    for(int i=0; i<10; i++)
    {
        if(!hayPar)
        {
            if(EsPar(numeros[i]))
            {
                ultimoPar = numeros[i];
                posUltimoPar = i+1;
                hayPar=true;
            }
        }
        else
        {
            if(EsPar(numeros[i]))
            {
                penultimoPar = ultimoPar;
                posPenultimoPar = posUltimoPar;

                ultimoPar = numeros[i];
                posUltimoPar = i+1;
            }
        }
    }
    cout << "Ultimo Par: " << ultimoPar << ". Posicion: " << posUltimoPar << endl;
    cout << "Penultimo Par: " << penultimoPar << ". Posicion: " << posPenultimoPar << endl;

    return 0;
}
