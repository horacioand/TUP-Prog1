#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar por teclado una cantidad de horas y mostrar
por pantalla a cuantos d�as y horas equivalen.
Ejemplo A: si se ingresan 26 horas el programa mostrar� por pantalla que
equivalen a 1 d�a y 2 horas.
Ejemplo B: si se ingresan 72 horas el programa mostrar� por pantalla que
equivalen a 3 d�as y 0 horas.
Ejemplo C: si se ingresan 20 horas el programa mostrar� por pantalla que
equivalen a 0 d�as y 20 horas.
*/
    int horasTotales, horas, dias;
    cout<<"Ingrese una cantidad de horas a expresar en dias:"<<endl;
    cin>>horasTotales;
    dias = horasTotales/24;
    horas = horasTotales%24;
    cout<<horasTotales<< " horas corresponde a "<<dias<<" dias con "<<horas<<" horas."<<endl;
    return 0;
}
