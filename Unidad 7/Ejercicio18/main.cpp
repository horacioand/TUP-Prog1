#include <iostream>

using namespace std;
/*
Dada una lista de 10 números, cargarlos en un vector. Luego ingresar dos
números a y b menores a 10. Determinar e informar cuál es el valor máximo en
el vector considerando los elementos que están entre las posiciones a y b.
*/
int main()
{
    int vectorNumeros[10], numeroA, numeroB, aux, maximo;
    bool hayMaximo = false;
    for(int i=0; i<10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> vectorNumeros[i];
    }

    cout << "Determinar el maximo entre dos posiciones.(del 1 al 10)" << endl;
    cout << "Ingrese el primer numero :"; cin >> numeroA;
    cout << "Ingrese el segundo numero: "; cin >> numeroB;
    cout << endl;

    if(numeroA > numeroB)
    {
        aux = numeroA;
        numeroA = numeroB;
        numeroB = aux;
    }

    numeroA -= 1;   //paso de posicion a indice
    numeroB -= 1;


    for(int i = numeroA + 1; i < numeroB; i++) //for desde el indice a (+1 porque es entre las posiciones) hasta b-1
    {
        if(!hayMaximo){
            maximo = vectorNumeros[i];
            hayMaximo = true;
        }
        else{
            if(vectorNumeros[i] > maximo){
                maximo = vectorNumeros[i];
            }
        }

    }
    if(numeroA == numeroB-1)
    {
        cout << "No hay valores posibles entre dos posiciones consecutivas.";
    }
    else
    {
        cout << "El maximo entre las posiciones " << numeroA+1 << " y " << numeroB+1 << " es " << maximo;
    }

    return 0;
}
