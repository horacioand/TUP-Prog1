#include <iostream>
using namespace std;
 int main(){
/*Hacer un programa para ingresar por teclado una cantidad de minutos y
mostrar por pantalla a cuantas horas y minutos equivalen.
Ejemplo A: si se ingresan 380 minutos el programa mostrará por pantalla que
equivalen a 6 horas y 20 minutos.
Ejemplo B: si se ingresan 720 minutos el programa mostrará por pantalla que
equivalen a 12 horas y 0 minutos.
Ejemplo C: si se ingresan 50 minutos el programa mostrará por pantalla que
equivalen a 0 horas y 50 minutos*/
    int horas, minutos, minutosTotales;
    cout<<"Ingrese una cantidad de minutos a expresar en horas:"<<endl;
    cin>>minutosTotales;
    horas=minutosTotales/60;
    minutos=minutosTotales%60;
    cout<<minutosTotales<<" minutos equivalen a "<<horas<<" horas con "<<minutos<<" minutos."<<endl;

    return 0;
 }
