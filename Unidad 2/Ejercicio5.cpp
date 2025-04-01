#include <iostream>
using namespace std;

int main(){
/* Un negocio de perfumería efectúa descuentos según el importe de la venta.
Si el importe es menor a $100 aplicar un descuento del 5%
Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
Si el importe es mayor a $500 aplicar un descuento del 15%
Hacer un programa donde se ingresa el importe original sin descuento y se
informe por pantalla el importe con el descuento ya aplicado.
Importante: Verifique que el programa emita UN SOLO CARTEL.
*/
    float importe;
    cout<<"Calcular el importe segun descuento."<<endl;
    cout<<"Ingrese el importe de la venta: "<<endl;
    cin>>importe;
    if(importe<100){
        importe = importe - (importe*0.05);
    }else if(importe>=100&&importe<=500){
        importe = importe - (importe*0.1);
    }else{
        importe = importe - (importe*0.15);
    }
    cout<<"El importe de la venta con el descuento aplicado es de "<<importe<<endl;

    return 0;
}
