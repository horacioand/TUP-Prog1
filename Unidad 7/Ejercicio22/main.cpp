#include <iostream>

using namespace std;
/*
Una empresa comercializa 20 tipos de artículos y por cada venta realizada
genera un registro con los siguientes datos:
● Número de Artículo (1 a 20)
● Cantidad Vendida
Puede haber varios registros para el mismo artículo y el último registro se indica
cuando se ingresa un número de artículo igual a 0. Se pide determinar e
informar:
3
a) El número de artículo que más se vendió en total.
b) Los números de artículos que no registraron ventas.
c) Cuántas unidades se vendieron del número de artículo 10.
*/
int main()
{
    int ventas[20] = {0}, articuloMasVendido=0, maximo=0;
    int numeroArticulo;
    int cantidadVendida;

    cout << "Ingrese un numero de articulo del 1 al 20 seguido de la cantidad vendida. " << endl;
    cout << "Numero de articulo: "; cin >> numeroArticulo;
    while(numeroArticulo!=0)
    {
        if(numeroArticulo>0&&numeroArticulo<=20)
        {
            cout << "Cantidad Vendida: "; cin >> cantidadVendida;
            ventas[numeroArticulo-1] += cantidadVendida;
        }
        else
        {
            cout << "Numero de articulo invalido..." << endl;
        }

        cout << "Numero de articulo: "; cin >> numeroArticulo;
    }

    for(int i=0; i<20; i++)
    {
        if(ventas[i]>maximo)
        {
            maximo = ventas[i];
            articuloMasVendido=i+1;   //el numero de articulo corresponde al indice+1
        }
        if(ventas[i]==0)
        {
            cout<<"El articulo " << i+1 << " no registró ventas." << endl;
        }
    }

    cout << "Articulo mas vendido: [" << articuloMasVendido << "], con un total de " << maximo << " ventas." << endl;
    cout << "Ventas del articulo 10: " << ventas[9];

    return 0;
}
