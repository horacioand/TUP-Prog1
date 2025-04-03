#include <iostream>
using namespace std;

int main(){
/*Una fábrica de caramelos dispone de un presupuesto inicial para inaugurar su
sucursal en Villa Aberdeen. Se sabe que para producir caramelos tienen los
siguientes costos:
- Costo de alquiler de $10000
- Costo por caramelo producido de $2.50
- Costo por mantenimiento cada 100 caramelos de $5000
Dados el presupuesto inicial y la cantidad de caramelos a producir el primer
mes, informar:
- "El presupuesto es suficiente para cubrir los costos de $XXXX"
- "El presupuesto no es suficiente, necesita un crédito de $XXXX*/
    int cantidadCaramelos, mantenimiento;
    double presupuestoInicial, costoInicial, costoPorCaramelo;
    cout<<"Ingrese el presupuesto inicial: ";
    cin>>presupuestoInicial;
    cout<<endl;
    cout<<"Ingrese la cantidad de caramelos a producir: ";
    cin>>cantidadCaramelos;
    cout<<endl;

    costoInicial+=10000;    //alquiler
    costoInicial = costoInicial + (cantidadCaramelos*2.5);  //costo por caramelo
    if(cantidadCaramelos>=100){
        mantenimiento = cantidadCaramelos/100;
        costoInicial+=mantenimiento;
    }
    cout<<endl<<endl;
    if(presupuestoInicial>costoInicial){
        cout<<"El presupuesto inicial ($"<<presupuestoInicial<<") es suficiente para cubrir los costos de $"<<costoInicial<<endl;
    }else{
        cout<<"El presupuesto inicial ($"<<presupuestoInicial<<") NO es suficiente para cubrir los costos de $"<<costoInicial<<endl;
    }
    return 0;
}
