#include <iostream>
using namespace std;

int main(){
/*Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la
siguiente escala:
$10 por kilovatio (kW) por el consumo hasta los primeros 100 kW de consumo.
$12 por kW por el consumo excedente de 101 a 200 kW.
$15 por kW por el consumo excedente de 201 kW en adelante.
Hacer un programa para que, dado el consumo en kilovatios de un determinado
cliente, el programa calcule e informe el total a pagar.
Ejemplo 1: Un consumo de 55 kW, se calculará: $ 10 x 55= $ 550
Ejemplo 2: Un consumo de 125 kW, se calculará: $10 x 100 + $12 x 25 = $1300.
Ejemplo 3: Un consumo de 250 kW, se calculará: $10 x 100 + $12 x 100 + $15 x
50 = $2950.
*/
    int consumo, importe;
    cout<<"Calcular precio por consumo."<<endl;
    cout<<"Ingrese el consumo eléctrico expresado en kW"<<endl;
    cin>>consumo;

    if(consumo<=100){
        importe = consumo * 10;
    }else if(consumo>100&&consumo<=200){
        importe = (100*10)+(consumo-100)*12;
    }else{
        importe = (100*10)+(100*12)+(consumo-200)*15;
    }
    cout<<"El importe total a pagar por "<<consumo<<" kW es de $"<<importe<<endl;


    return 0;
}
