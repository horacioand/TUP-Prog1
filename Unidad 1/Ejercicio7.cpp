#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar por teclado el importe de una venta y el
porcentaje de descuento aplicada a la misma y luego informar por pantalla el
importe a pagar.
Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces
el total a pagar será de $1020.
Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el
total a pagar será de $800*/
    int descuento;
    float importe, total;
    cout<<"Ingrese el importe de la venta:"<<endl;
    cin>>importe;
    cout<<"Ingrese el descuento a aplicar:"<<endl;
    cin>>descuento;
    total = importe - (descuento*importe/100);
    cout<<"El total de la venta es de: $"<<total;

    return 0;
}
