#include <iostream>

using namespace std;
/*
Hacer un programa para llenar un vector de 10 elementos con el formato: 1, 0,
1, 0, 1, 0, 1, 0, 1, 0. Luego mostrar los números por pantalla. EL USUARIO NO
INGRESA NINGÚN VALOR EN ESTE PROGRAMA.
*/
int main()
{
    int numeros[10];
    bool bandera=true;

    for(int i=0; i<10; i++){
        if(bandera)
        {
            numeros[i]=1;
            bandera=false;
        }
        else
        {
            numeros[i]=0;
            bandera=true;
        }
    }

    for(int i=0; i<10; i++)
    {
        cout<<numeros[i]<<endl;
    }

    return 0;
}
