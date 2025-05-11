#include <iostream>
using namespace std;
/*
 Un número Simonírico es un número positivo divisible por 15 y a la vez divisible
por 3 pero no divisible por 6. Hacer un programa que muestre los primeros 1000
números Simoníricos. El usuario no debe ingresar nada.
NOTA: El número Simonírico es un concepto ficticio creado exclusivamente
para los fines de este ejercicio. No existe en la matemática real.
*/

int main()
{
    int numero=1, numerosSimoniricos=0;

    while(numerosSimoniricos<1000)
    {
        if(numero%15==0 && numero%6!=0)
        {
            numerosSimoniricos++;
            cout<<numero<<endl;
        }
        numero++;
    }
    return 0;
}
