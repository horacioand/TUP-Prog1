#include <iostream>
using namespace std;

int main(){
    /*
El costo de un desarrollo de un proyecto de software se calcula en base al
lenguaje que se necesita:
    Nombre  Tipo    Valor hora
    C/C++   'C'     $ 7500
    C#      '#'     $ 6100
    Python  'P'     $ 5400
    Go      'G'     $ 5000
Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más
al costo del proyecto.
Le solicitan un programa que permita calcular el costo total de un proyecto
basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o
no (bool)
    */
    float costo=0;
    int horas;
    char lenguaje;
    bool urgencia;
    cout<<"Calculadora de costos de desarrollo."<<endl;
    cout<<"Ingrese el lenguaje de programacion: C++ -> (C) , C# -> (#) , Python -> (P) , Go -> (G)  "<<endl;
    cin>>lenguaje;
    cout<<"Ingrese la cantidad de horas requeridas:  ";
    cin>>horas;
    cout<<"El proyecto es urgente? 1->Si , 0->No "<<endl;
    cin>>urgencia;
    lenguaje=toupper(lenguaje);
    if(lenguaje=='C'){
        costo = 7500*horas;
    }else if(lenguaje=='#'){
        costo = 6100 * horas;
    }else if(lenguaje=='P'){
        costo = 5400 * horas;
    }else if(lenguaje=='G'){
        costo=5000 * horas;
    }else{
        cout<<"Ingrese valores validos..."<<endl;
    }
    if(urgencia==1){
        costo=costo + (costo*1.2);
    }
    cout<<"El costo total del proyecto desarrollado en "<<lenguaje<<" sera de $"<<costo<<endl;
    return 0;
}
