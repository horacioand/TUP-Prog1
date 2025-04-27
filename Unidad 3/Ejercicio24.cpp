#include <iostream>
using namespace std;
/*
Hacer un programa que permita ingresar el sueldo de 10 empleados y
determine:
- El sueldo máximo.
- El sueldo mínimo.
- El sueldo promedio.
- Cantidad de sueldos mayores a $50000.

*/

int main(){
    int contadorSueldos=0, contadorSueldosAltos=0;
    float sueldo, sueldoMaximo, sueldoMinimo, sueldoPromedio, acumuladorSueldo=0;

    for(int i=0; i<10; i++){
        cout<<"Ingrese el sueldo: ";
        cin>>sueldo;
        if(i==0){
            sueldoMaximo = sueldo;
            sueldoMinimo = sueldo;
        }else{
            //sueldos maximos y minimos
            if(sueldo>sueldoMaximo){
                sueldoMaximo = sueldo;
            }
            if(sueldo<sueldoMinimo){
                sueldoMinimo = sueldo;
            }
        }
        //sueldo promedio p1
        acumuladorSueldo = acumuladorSueldo + sueldo;
        contadorSueldos++;

        //cantidad de sueldos mayores a 50000
        if(sueldo>50000){
            contadorSueldosAltos++;
        }
    }
    sueldoPromedio = acumuladorSueldo/contadorSueldos;
    cout<<"Sueldo maximo: "<<sueldoMaximo<<". Sueldo minimo: "<<sueldoMinimo<<endl;
    cout<<"Sueldo promedio: "<<sueldoPromedio<<endl;
    cout<<"Cantidad de sueldos mayores a 50000: "<<contadorSueldosAltos;


    return 0;
}
