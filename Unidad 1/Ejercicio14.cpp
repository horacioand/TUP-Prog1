#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar el importe de una compra y el descuento a
aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el
importe total a cobrar.
Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
Importe: 4500, Descuento: 1800, total: 2700.
*/
    float importe, total;
    int descuento;
    cout<<"Ingrese el importe de la compra: "<<endl;
    cin>>importe;
    cout<<"Ingrese el descuento a aplicar: "<<endl;
    cin>>descuento;
    total = importe - (descuento*importe/100);
    cout<<"Importe: "<<importe<<". Descuento: "<<(descuento*importe/100)<<". Total: "<<total<<endl;


    return 0;
}
