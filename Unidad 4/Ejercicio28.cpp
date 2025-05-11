#include <iostream>
#include <stdlib.h>
using namespace std;
/*
Hacer un programa que contenga un menú con el siguiente formato:
Menú principal
-----------------------------
1 - Ingresar medida en metros
2 - Convertir a centímetros
3 - Convertir a kilómetros
4 - Convertir a pulgadas
5 - Convertir a pies
-----------------------------
0 - Salir del programa
Ingrese opción:
Al ingresar a la opción 1, nos pedirá una medida (float) en metros que con las
siguientes opciones del menú podremos mostrarla convertida a otras unidades.
El programa debe permitir al usuario ingresar a las opciones las veces que lo
desee y sólo finalizará al ingresar a la opción 0.
*/

int main(){
    int opcion=-1;
    float medida=0, conversion;
    string conversionMedida;

    while(opcion!=0){

    cout<<"Menú principal"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"1 - Ingresar medida en metros"<<endl;
    cout<<"2 - Convertir a centímetros"<<endl;
    cout<<"3 - Convertir a kilómetros"<<endl;
    cout<<"4 - Convertir a pulgadas"<<endl;
    cout<<"5 - Convertir a pies"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"0 - Salir del programa"<<endl;
    cout<<"Ingrese opción: "; cin>>opcion;

    switch(opcion)
    {
        case 1:
            cout<<"-----------------------------"<<endl;
            cout<<"Ingrese la medida en metros: "; cin>> medida;
            break;
        case 2:
            conversion = medida * 100;
            conversionMedida = " cm";
            break;
        case 3:
            conversion = medida / 1000;
            conversionMedida = " km";
            break;
        case 4:
            conversion = medida * 39.3701;
            conversionMedida = " pulgadas";
            break;
        case 5:
            conversion = medida * 3.28084;
            conversionMedida = " pies";
            break;
        default:
            cout<<"Opcion no valida."<<endl;
            break;

    }

    system("cls");

    if(opcion!=1 && medida!=0){
        cout<<"Medida: "<<medida<<" metros."<<endl;
        cout<<"Conversion: "<<conversion<<conversionMedida<<endl<<endl;
    }


    }
    return 0;
}
