#include <iostream>

using namespace std;
/*
Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el
menor de los impares y el mayor de los pares. Suponer que habrá al menos un
número par y uno impar.
*/
int EsPar(int numero)
{
    return numero%2==0;
}

int main()
{
    int numeros[10];
    int menorImpar, mayorPar;
    bool hayPar=false, hayImpar=false;
    for(int i=0; i<10; i++)
    {
        cout << "Ingrese un numero: "; cin >> numeros[i];
    }

    for(int i=0; i<10; i++)
    {
        if(EsPar(numeros[i]))
        {
            if(!hayPar){
                mayorPar=numeros[i];
                hayPar=true;
            }
            else if(numeros[i]>mayorPar)
            {
                mayorPar = numeros[i];
            }
        }
        else
        {
            if(!hayImpar){
                menorImpar=numeros[i];
                hayImpar=true;
            }
            else if(numeros[i]<menorImpar)
            {
                menorImpar = numeros[i];
            }

        }
    }
    cout << "Mayor par: " << mayorPar << ". Menor Impar: " << menorImpar;

    return 0;
}
