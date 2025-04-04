#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 10 números e informar el máximo
de los negativos y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo 2.
*/

int main()
{
//Declaracion
    int numero, maximoNegativo=0, minimoPositivo=0;
    bool okNegativo=false, okPositivo=false;

    for(int i=0; i<10; i++)
    {
        cout<<"Ingrese un numero: ";
        cin>>numero;

        //Proceso
        if(numero>0){
            if(!okPositivo || numero<minimoPositivo){
                minimoPositivo = numero;
                okPositivo = true;
            }
        }else if(numero<0){
            if(!okNegativo || numero>maximoNegativo){
                maximoNegativo = numero;
                okNegativo = true;
            }
        }
    }

//Egreso
    cout<<"Maximo negativo: "<<maximoNegativo<<endl<<"Minimo positivo: "<<minimoPositivo;


    return 0;
}
