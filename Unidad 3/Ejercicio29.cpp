#include <iostream>
using namespace std;
/*
Se dispone de la información de los últimos 19 partidos de un futbolista. Por
cada partido se registró:
- Número de partido
- Minutos jugados
- Tarjetas amarillas
- Tarjetas rojas
- Goles
Existe un registro para cada partido. Los mismos se encuentran ordenados por
número de partido. Se pide calcular e informar:
A) La cantidad de partidos que no jugó (partidos con minutos igual a cero)
B) La cantidad de partidos que jugó por completo (minutos >= 90)
C) El promedio de tarjetas recibidas por partido.
D) El número de partido en el que haya convertido mayor cantidad de goles.
Indicar también los goles convertidos.
E) La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor
cantidad de partidos consecutivos en los que haya convertido.

*/

int main(){
    int numeroPartido, minutosJugados, tarjetaAmarilla, tarjetaRoja, goles, partidoMayorGoles, maximoGol, mejorRacha=0, rachaActual=0;
    int contadorTarjetas=0, partidosNoJugados=0, partidosCompletados=0, contadorGoles=0, contadorPartidos=0;
    float promedioTarjetas;
    for(int i=0; i<19; i++){
        cout<<"Ingrese los datos correspondientes."<<endl;
        numeroPartido=i+1;
        cout<<"Numero de partido: "<<numeroPartido<<endl;
        cout<<"Minutos Jugados: ";
        cin>>minutosJugados;
        cout<<"Tarjetas Amarillas: ";
        cin>>tarjetaAmarilla;
        cout<<"Tarjetas Rojas: ";
        cin>>tarjetaRoja;
        cout<<"Goles: ";
        cin>>goles;
        contadorPartidos++;
        if(minutosJugados==0){
            partidosNoJugados++;
        }
        if(minutosJugados>=90){
            partidosCompletados++;
        }
        contadorTarjetas=contadorTarjetas+tarjetaAmarilla+tarjetaRoja;

        if(i==0){
            partidoMayorGoles=numeroPartido;
            maximoGol=goles;
        }else{
            if(goles>maximoGol){
                partidoMayorGoles=numeroPartido;
                maximoGol=goles;
            }
        }
        if(goles>0){
            rachaActual++;
            if(rachaActual>mejorRacha){
                mejorRacha= rachaActual;
            }
        }else{
            rachaActual=0;
        }
    }
    promedioTarjetas = (float)contadorTarjetas / contadorPartidos;
    cout<<"Cantidad de partidos no jugados: "<<partidosNoJugados<<endl;
    cout<<"Cantidad de partidos completados: "<<partidosCompletados<<endl;
    cout<<"Promedio de tarjetas por partido: "<<promedioTarjetas<<endl;
    cout<<"Maxima cantidad de goles: "<<maximoGol<<". Partido: "<<partidoMayorGoles<<endl;
    cout<<"Mejor racha de partidos convirtiendo goles: "<<mejorRacha<<endl;
    return 0;
}
