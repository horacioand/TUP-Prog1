#include <iostream>
using namespace std;

int main()
{
    /*Hacer un programa para ingresar el importe de una compra y el descuento a
    aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el
    importe total a cobrar.
    Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
    Importe: 4500, Descuento: 1800, total: 2700.
    */
    float importe, total, descuentoAplicado;
    int descuento;
    cout<<"Ingrese el importe de la compra: "<<endl;
    cin>>importe;
    cout<<"Ingrese el descuento a aplicar: "<<endl;
    cin>>descuento;
    descuentoAplicado = descuento*importe/100;
    total = importe - (descuento*importe/100);
    cout<<"Importe: "<<importe<<". Descuento: "<<descuentoAplicado<<". Total: "<<total<<endl;


    return 0;
}
