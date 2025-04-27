#include <iostream>
using namespace std;
/*
Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y
determine:
- El legajo del empleado con mayor sueldo

*/

int main(){
    int legajo, legajoMaxSueldo;
    int sueldo, sueldoMax;

    for(int i=0; i<10; i++){
        cout<<"Ingrese el legajo del empleado: ";
        cin>>legajo;
        cout<<"Ingrese el sueldo del empleado: ";
        cin>>sueldo;

        if(i==0){
            legajoMaxSueldo=legajo;
            sueldoMax=sueldo;
        }else{
            if(sueldo>sueldoMax){
                sueldoMax=sueldo;
                legajoMaxSueldo=legajo;
            }
        }
    }
    cout<<"El legajo del empleado con mayor sueldo($"<<sueldoMax<<") es "<<legajoMaxSueldo<<endl;

    return 0;
}
