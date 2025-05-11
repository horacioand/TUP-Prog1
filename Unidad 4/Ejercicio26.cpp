#include <iostream>
using namespace std;
/*
 Un n�mero Simon�rico es un n�mero positivo divisible por 15 y a la vez divisible
por 3 pero no divisible por 6. Hacer un programa que muestre los primeros 1000
n�meros Simon�ricos. El usuario no debe ingresar nada.
NOTA: El n�mero Simon�rico es un concepto ficticio creado exclusivamente
para los fines de este ejercicio. No existe en la matem�tica real.
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
