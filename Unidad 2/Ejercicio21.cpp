#include <iostream>
using namespace std;

int main(){
/*Una marroquinería dispone de 45 carteras blancas, 50 carteras negras, 40
marrones y 49 grises. Se pide hacer un programa donde se ingresen tres
ventas. Cada venta está compuesta por:
- Cantidad de carteras
- Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)
Calcular e informar:
- Cantidad total de carteras vendidas en total.
- Cuántas carteras quedaron de cada tipo.
- Los colores de carteras que no se vendieron.
NOTA: Ninguna venta superará las 10 carteras*/
    int stockBlanco=45, stockNegro=50, stockMarron=40, stockGris=49, ventasTotales=0, cantidadVendida;
    char tipoCartera;
    cout<<"Ventas de carteras:"<<endl;

    cout<<"Venta 1:"<<endl;
    cout<<"Ingrese el color de cartera: (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris) ";
    cin>>tipoCartera;
    cout<<"Ingrese la cantidad vendida: (Maximo 10 por venta) ";
    cin>>cantidadVendida;
    cout<<endl;
    if(cantidadVendida>10){
        cantidadVendida=10;
    }
    ventasTotales+=cantidadVendida;
    if(tipoCartera=='1'){
        stockBlanco-=cantidadVendida;
    }else if(tipoCartera=='2'){
        stockNegro-=cantidadVendida;
    }else if(tipoCartera=='3'){
        stockMarron-=cantidadVendida;
    }else if(tipoCartera=='4'){
        stockGris-=cantidadVendida;
    }

    cout<<"Venta 2:"<<endl;
    cout<<"Ingrese el color de cartera: (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)";
    cin>>tipoCartera;
    cout<<"Ingrese la cantidad vendida: (Maximo 10 por venta) ";
    cin>>cantidadVendida;
    cout<<endl;
    if(cantidadVendida>10){
        cantidadVendida=10;
    }
    ventasTotales+=cantidadVendida;
    if(tipoCartera=='1'){
        stockBlanco-=cantidadVendida;
    }else if(tipoCartera=='2'){
        stockNegro-=cantidadVendida;
    }else if(tipoCartera=='3'){
        stockMarron-=cantidadVendida;
    }else if(tipoCartera=='4'){
        stockGris-=cantidadVendida;
    }

    cout<<"Venta 3:"<<endl;
    cout<<"Ingrese el color de cartera: (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)";
    cin>>tipoCartera;
    cout<<"Ingrese la cantidad vendida: (Maximo 10 por venta) ";
    cin>>cantidadVendida;
    cout<<endl;
    if(cantidadVendida>10){
        cantidadVendida=10;
    }
    ventasTotales+=cantidadVendida;
    if(tipoCartera=='1'){
        stockBlanco-=cantidadVendida;
    }else if(tipoCartera=='2'){
        stockNegro-=cantidadVendida;
    }else if(tipoCartera=='3'){
        stockMarron-=cantidadVendida;
    }else if(tipoCartera=='4'){
        stockGris-=cantidadVendida;
    }
    cout<<endl<<endl;
    cout<<"Se vendieron un total de "<<ventasTotales<<" carteras"<<endl<<endl;
    cout<<"Stock restante:"<<endl<<"Blanco: "<<stockBlanco<<endl<<"Negro: "<<stockNegro<<endl<<"Marron: "<<stockMarron<<endl<<"Gris: "<<stockGris<<endl;
    if(stockBlanco==45){
        cout<<"No se registraron ventas de carteras color blanco"<<endl;
    }
    if(stockNegro==50){
        cout<<"No se registraron ventas de carteras color negro"<<endl;
    }
    if(stockMarron==40){
        cout<<"No se registraron ventas de carteras color marron"<<endl;
    }
    if(stockGris==49){
        cout<<"No se registraron ventas de carteras color gris"<<endl;
    }
    return 0;
}
