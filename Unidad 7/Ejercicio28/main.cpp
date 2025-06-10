#include <iostream>

using namespace std;
/*
Un negocio de venta de libros cuenta con los siguientes lotes de información:
Un primer lote cuenta con los datos de los libros que este negocio vende. Cada
registro contiene:
● Código de Libro (1 a 200)
● Tema (1 a 20)
● Precio
Este lote cuenta con un total de 200 registros y se ingresa desordenado.
Un segundo lote con los datos de las ventas del último mes. Cada registro
contiene los siguientes datos:
● Código de Libro (1 a 200)
● Número de Vendedor (1 a 10)
● Día de la venta (1 a 31)
Puede haber varios registros para el mismo código de libro y para el mismo
vendedor. Este lote finaliza con un registro con código de libro igual a cero.
Se pide determinar e informar:
a) Indicar por separado la recaudación total para cada uno de las 31 días.
b) Cuál es el número de vendedor con mayor recaudación total por ventas.
c) Cuál es el número de tema más vendido.

*/
int main()
{
    const int CANTIDAD_LIBROS = 200;
    const int CANTIDAD_TEMAS = 20;

    //variables lote de ingreso
    //codigo de libro va a ser el indice del vector de precio
    int temaLibro[CANTIDAD_LIBROS]={0};   //almacena el numero de ventas por tema
    float precioLibro[CANTIDAD_LIBROS];

    //variables lote de proceso
    int numVendedor, codLibro, diaVenta;
    float recaudacionVendedor[10]={0}, recaudacionDia[31]={0}, mayorRecaudacion=0;
    int mayorVendedor, maxVentas=0, temaMasVendido;
    int ventasPorTema[20]={0};

    //carga de ejemplo
    for(int i=0; i<CANTIDAD_LIBROS; i++)
    {
        precioLibro[i] = 5000 + (i % 100);
        temaLibro[i] = i % CANTIDAD_TEMAS; //tema del 0 al 19 (indices)
    }

    cout << "Ingrese el codigo de libro(1 a 200): "; cin >> codLibro;
    while(codLibro != 0)
    {
        if(codLibro>0 && codLibro<=CANTIDAD_LIBROS)
        {

            cout << "Ingrese el numero de vendedor(1 a 10): "; cin >> numVendedor;
            if(numVendedor>0 && numVendedor<=10)
            {

                cout << "Ingrese el dia de la venta(1 a 31): "; cin >> diaVenta;
                if(diaVenta>0 && diaVenta<=31)
                {
                    //PROCESO PRINCIPAL, todo lo anterior son validaciones
                    // punto a
                    recaudacionDia[diaVenta-1] += precioLibro[codLibro-1]; //-1 pq lo manejamos x indices
                    // punto b
                    recaudacionVendedor[numVendedor-1] += precioLibro[codLibro-1];
                    //punto c
                    ventasPorTema[temaLibro[codLibro-1]]++;
                }
                else
                {
                    system("cls");
                    cout << "Ingrese un dia valido (1 a 31)"<<endl;
                }
            }
            else
            {
                system("cls");
                cout << "Ingrese un numero de vendedor valido." << endl;
            }
        }
        else
        {
            system("cls");
            cout << "Ingrese un codigo de libro válido(1 a 200)." << endl;
        }
        cout << "Ingrese el codigo de libro: "; cin >> codLibro;
    }

    system("cls");
    cout << "Recaudacion por dia: "<<endl;
    for(int i=0; i<31; i++)
    {
        cout << "Dia " << i+1 << " - " << recaudacionDia[i] << endl;
    }
    cout << "---------------" << endl;
    cout << "Vendedor con mayor recaudacion: "<< endl;
    for(int i =0; i<10; i++)
    {
        if(recaudacionVendedor[i]>mayorRecaudacion)
        {
            mayorVendedor = i+1;
            mayorRecaudacion = recaudacionVendedor[i];
        }
    }
    cout << "Vendedor " << mayorVendedor << ", con $" << recaudacionVendedor[mayorVendedor-1] << " recaudado por ventas";
    cout << "---------------" << endl;
    for(int i=0; i<20; i++)
    {
        if(ventasPorTema[i]>maxVentas)
        {
            maxVentas = ventasPorTema[i];
            temaMasVendido = i+1;
        }
    }
    cout << "Tema mas vendido: " << temaMasVendido << ", con " << ventasPorTema[temaMasVendido-1] << " unidades vendidas." << endl;
    return 0;
}
