#include <iostream>

using namespace std;
/*
Dada una lista de números compuesta por 10 subgrupos y cada grupo
separado del siguiente por un cero, se pide generar un vector de 10 elementos
con el máximo de cada uno de los subgrupos. Luego mostrar los elementos del
vector por pantalla.
*/
int main()
{
    int vectorMaximos[10], maximo, numero;
    bool hayMax=false;
    for(int i=0; i<10; i++)
    {
        hayMax=false;

        cout << "Nuevo grupo. Ingrese el primer numero: "; cin >> numero;
        while(numero!=0)
        {
            if(!hayMax){
                maximo=numero;
                hayMax=true;
            }
            else
            {
                if(numero>maximo)
                {
                    maximo=numero;
                }
            }
            cout << "Ingrese un numero: "; cin >> numero;
        }
        //Establecer el maximo en cero ya que si me salteo un grupo me toma el valor maximo anterior
        if(!hayMax){
            cout<<"No se ingresaron numeros en el grupo, se establecera el maximo en -9999"<<endl;
            maximo=-9999;
        }
        vectorMaximos[i] = maximo;
    }


    for(int i=0; i<10; i++)
    {
        cout<<vectorMaximos[i]<<endl;
    }
    return 0;
}
