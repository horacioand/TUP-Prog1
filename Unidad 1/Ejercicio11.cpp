#include <iostream>
using namespace std;

int main(){
/*
Hacer un programa para ingresar por teclado una cantidad de minutos y
mostrar por pantalla a cuántos días, horas y minutos equivalen.
Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que
equivalen a 1 día, 1 hora y 20 minutos.
Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que
equivalen a 0 día, 8 horas y 0 minutos.
*/
    int minutosTotales, minutos, horas, dias;
    cout<<"Ingrese la cantidad de minutos a expresar en dias, horas y minutos"<<endl;
    cin>>minutosTotales;
    dias = minutosTotales /60 / 24;
    horas = minutosTotales / 60 % 24;
    minutos = minutosTotales % 60;
    cout<<minutosTotales<<" minutos equivalen a "<<dias<<" dias, "<<horas<<" horas y "<<minutos<<" minutos."<<endl;
    return 0;
}
