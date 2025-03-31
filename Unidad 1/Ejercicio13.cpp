#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para un cajero autom�tico para ingresar un importe a retirar
y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a
entregar.
Ejemplo A: Si el importe a retirar es $2500 se mostrar� por pantalla que se
deber�n entregar 2 billetes de $1.000, 1 billete de $500, 0 billetes de $200 y 0
billetes de $100.
Ejemplo B: Si el importe a retirar es $3400 se mostrar� por pantalla que se
deber�n entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0
billetes de $100.
Ejemplo C: Si el importe a retirar es $300 se mostrar� por pantalla que se
deber�n entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0
billetes de $500.
Recordatorio. Considerar en todos los casos que el importe a retirar es en todos
los casos m�ltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o
$10.*/
    int monto, b1000, b500, b200, b100;
    cout<<"Ingrese la cantidad de dinero a retirar: "<<endl;
    cin>>monto;
    b1000 = monto / 1000;
    monto = monto % 1000;
    b500 = monto / 500;
    monto = monto % 500;
    b200 = monto / 200;
    monto = monto % 200;
    b100 = monto / 100;
    monto = monto % 100;
    cout<<"Se retiraran "<<b1000<<" billetes de $1000, "<<b500<<" billetes de $500, "<<b200<<" billetes de $200, "<<b100<<" billetes de $100, con un excedente de $"<<monto<<" que no podran ser retirados"<<endl;
    return 0;
}
