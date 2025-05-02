#include <iostream>
using namespace std;
/*
Hacer un programa para ingresar una lista de 13 números enteros. Se pide
luego determinar e informar:
A) La cantidad de ternas de valores positivos consecutivos.
B) La cantidad de ternas de valores negativos consecutivos y ordenados en
forma creciente.
Ejemplo si la lista fuera: 10, 5, 4, 3, -8, -3, -1, 0, 3, 8, -5, -8, -10 entonces el
programa detectará una terna de positivos consecutivos (10, 5, 4) y una terna de
negativos consecutivos ordenados (-8, -3, -1)
Nota: Si el número ingresado es cero, no se lo considera ni negativo ni positivo.
Nota: La terna (-5, -8, -10) no es contabilizada ya que no se encuentra ordenada
crecientemente.
*/

int main()
{
    int numero, numeroAnterior, numeroAntAnterior, ternaPositiva=0, ternaNegativa=0;
    bool hayTerna=false, flagTerna=false;

    for(int i=0; i<13; i++)
    {
        cout<<"Ingrese un numero:";
        cin>>numero;

        if(i>=2)
        {
            if(!hayTerna)//si no hay terna
            {

                if(numero>0 && numeroAnterior>0 && numeroAntAnterior>0)
                {
                    hayTerna=true;
                    ternaPositiva++;
                    cout<<"Terna positiva: "<<numeroAntAnterior<<" "<<numeroAnterior<<" "<<numero<<endl;
                }

                if(numero<0 && numeroAntAnterior<numeroAnterior && numeroAnterior<numero)
                {
                    hayTerna=true;
                    ternaNegativa++;
                    cout<<"Terna negativa: "<<numeroAntAnterior<<" "<<numeroAnterior<<" "<<numero<<endl;

                }
            }
            else   //si hay terna
            {
                if(!flagTerna)  //si el flag esta en 0
                {
                    flagTerna=true; //paso el flag a 1(para retrasar el analisis una vuelta)
                }
                else    //si el flag esta en 1
                {
                    flagTerna=false;    //paso el flag a 0
                    hayTerna=false;     //habilito la entrada al primer if
                }
            }

        }

        numeroAntAnterior=numeroAnterior;
        numeroAnterior=numero;
    }
    cout<<"Ternas positivas: "<<ternaPositiva<<endl;
    cout<<"Ternas negativas: "<<ternaNegativa<<endl;

    return 0;

}
