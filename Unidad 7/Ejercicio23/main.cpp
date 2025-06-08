#include <iostream>

using namespace std;
/*
Una empresa posee un grupo de 15 vendedores para atender a sus clientes.
Por cada venta realizada se genera un registro con la siguiente información:
● Número de vendedor (1 a 15)
● Importe de la venta (en $)
Un vendedor puede realizar más de una venta. El último registro se indica con
número de vendedor igual a 0.
Se pide determinar e informar:
a) El número de vendedor que más vendió en total (en $).
b) Cada uno de los números de vendedores que no hayan realizado ventas.
c) El total recaudado por la empresa por todas las ventas efectuadas por sus
vendedores
*/
int main()
{
    int numeroVendedor, vendedorVentaMaxima;
    float ventas[15]= {0}, ventaMaxima=0, importeVenta, importeVentasTotal=0;
    cout << "Ingrese el numero de vendedor seguido del monto de la venta realizada." << endl;
    cin >> numeroVendedor;

    while(numeroVendedor!=0)
    {
        if(numeroVendedor>0 && numeroVendedor<16)
        {
            cout << "Ingrese el importe de la venta: "; cin >> importeVenta;
            ventas[numeroVendedor-1] += importeVenta;
            importeVentasTotal +=importeVenta;
        }
        else
        {
            cout << "Ingrese un numero de vendedor valido: (del 1 al 15)" << endl;
        }
        cout << "Ingrese el numero de vendedor: ";
        cin >> numeroVendedor;
    }

    for(int i=0; i<15; i++)
    {
        if(ventas[i]>ventaMaxima)
        {
            ventaMaxima=ventas[i];
            vendedorVentaMaxima = i+1;
        }
    }
    cout << "Vendedor con mayor cantidad de ventas: " << vendedorVentaMaxima << ", con un total de $" << ventaMaxima << endl;
    cout << "Vendedores que no realizaron ventas: " << endl;
    for(int i=0; i<15; i++)
    {
        if(ventas[i] == 0)
        {
            cout << "Vendedor " << i+1 << endl;
        }
    }

    cout << "Total recaudado: $" << importeVentasTotal <<endl;

    system("pause");
    return 0;
}
