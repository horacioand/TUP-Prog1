#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar por teclado la cantidad de asientos totales en
un avi�n y la cantidad de pasajes ocupados y luego calcular e informar el
porcentaje de ocupaci�n y el porcentaje de no ocupaci�n del mismo.
Ejemplo si el avi�n tiene 200 asientos totales y se vendieron 80 pasajes, el
porcentaje de ocupaci�n que se informar� ser� de un 40% y el porcentaje de no
ocupaci�n ser� de un 60%.*/
    int asientosTotales, asientosOcupados;
    float porcentajeOcupado, porcentajeDesocupado;
    cout << "Ingrese la cantidad de asientos del avion"<<endl;
    cin >> asientosTotales;
    cout << "Ingrese la cantidad de asientos ocupados"<<endl;
    cin >> asientosOcupados;
    porcentajeOcupado = (float)asientosOcupados * 100 / asientosTotales;
    porcentajeDesocupado = 100 - porcentajeOcupado;
    cout << "Porcentaje de asientos ocupados: %"<<porcentajeOcupado<<endl;
    cout << "Porcentaje de asientos desocupados: %"<<porcentajeDesocupado<<endl;
return 0;
}
