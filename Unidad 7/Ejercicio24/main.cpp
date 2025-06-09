#include <iostream>

using namespace std;
/*
 Una empresa que fabrica 200 artículos tiene la siguiente información para cada
uno de las ventas del mes anterior:
● Código de Artículo (1 a 200)
● Día (1 a 31)
● Cantidad vendida
Puede haber más de un registro para el mismo artículo. El lote finaliza con un
registro con número de artículo igual a cero. Se pide determinar e informar:
a) Informar para cada código de artículo la cantidad total vendida en el mes.
b) Informar los días en los que no hubo ventas.
c) Informar los códigos de los artículos cuyas ventas en cantidad son mayores
al promedio.
*/
int main()
{
    int codigoArticulo, cantidadVendida, dia, ventasTotales=0;
    int ventasPorDia[31]= {0}, ventasPorCodigo[200]={0};
    int acumulador=0, contador=0, promedio, articuloMasVendido=0;
    cout << "Ingrese el codigo de articulo (1 a 200): ";
    cin >> codigoArticulo;
    while(codigoArticulo!=0)
    {
        if(codigoArticulo>0&& codigoArticulo<=200)
        {

            cout << "Ingrese el dia (1 a 31): " ;
            cin >> dia;
            if(dia>0&&dia<=31)
            {
                cout << "Ingrese la cantidad vendida: ";
                cin >> cantidadVendida;
                ventasPorDia[dia-1] += cantidadVendida;
                ventasPorCodigo[codigoArticulo-1] += cantidadVendida;
                acumulador += cantidadVendida;
            }
            else
            {
                //system("cls");
                cout << "Ingrese un dia valido..." << endl;
            }

        }
        else
        {
            //system("cls");
            cout << "Ingrese un codigo de articulo válido..." << endl;
        }

        cout << "Ingrese el codigo de articulo (1 a 200): ";
        cin >> codigoArticulo;
    }


    cout << "Ventas por articulo: " << endl;
    for(int i=0; i<200; i++)
    {
        if(ventasPorCodigo[i]>0){
            cout << "Articulo " << i+1 << " reporta " << ventasPorCodigo[i] << " ventas." << endl;
        }
    }

    cout << "---------------------" << endl;
    cout << "Ventas por dia: " << endl;
    for(int i=0; i<31; i++)
    {
        if(ventasPorDia[i]>0){
            cout << "Dia " << i+1 << ": " << ventasPorDia[i] << " articulos vendidos." << endl;
        }
        else
        {
            cout << "Dia " << i+1 << ": no se registraron ventas." << endl;
        }
    }

    cout << "---------------------" << endl;
    //promedio de ventas
    for(int i=0; i<200; i++)
    {
        if(ventasPorCodigo[i]>0)
        {
            contador++;
        }
    }
    promedio = acumulador / contador;
    cout << "Articulos con ventas mayor al promedio (" << promedio << ")"<<endl;
    for(int i=0; i<200; i++)
    {
        if(ventasPorCodigo[i]>promedio)
        {
            cout << "Articulo " << i+1 << ". Ventas: " << ventasPorCodigo[i] << endl;
        }
    }

    return 0;
}
