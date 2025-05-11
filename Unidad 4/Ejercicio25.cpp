#include <iostream>
using namespace std;
/*
 El mejor festival musical del mundo brindará una serie de conciertos
distribuidos en tres jornadas distintas. Se desea un programa que registre los
artistas que participarán. Por cada artista se registró:
- Número de artista (entero)
- Integrantes (entero)
- Jornada (1, 2 o 3)
- Duración del show en minutos (entero)
La información no se encuentra ordenada bajo ningún criterio. La carga de
datos se finaliza con un número de artista igual a cero. Calcular e informar:
- El número de artista que realice el show más largo de la jornada 1.
- La cantidad de solistas (artistas de 1 integrante) que participaron en
cada una de las jornadas. (se muestran tres resultados).
- La jornada más extensa (en minutos totales).
- Duración promedio de show por artista (se muestra un resultado).
*/

int main()
{
    int nroArtista, integrantes, jornada, duracionShow, promedio, duracionTotalShow=0, totalArtistas=0;
    int artistaShowLargoJornada1=0, showLargoJornada1=0;
    int solistas1=0, solistas2=0, solistas3=0;
    int jornadaMasExtensa=0,minutosJornadaMasExtensa, minutosJornada1=0, minutosJornada2=0, minutosJornada3=0;
    cout<<"Ingrese un numero de artista: ";
    cin>>nroArtista;

    while(nroArtista!=0)
    {
        cout<<"Ingrese la cantidad de integrantes: ";
        cin>>integrantes;
        cout<<"Ingrese la jornada: ";
        cin>>jornada;
        cout<<"Ingrese la duracion del show en minutos: ";
        cin>>duracionShow;

        duracionTotalShow+=duracionShow;
        totalArtistas++;

        if(jornada==1)
        {
            if(showLargoJornada1==0)
            {
                artistaShowLargoJornada1=nroArtista;
                showLargoJornada1=duracionShow;
            }
            else
            {
                if(duracionShow>showLargoJornada1)
                {
                    artistaShowLargoJornada1=nroArtista;
                    showLargoJornada1=duracionShow;
                }
            }
        }

        if(jornada==1)
        {
            if(integrantes==1)
            {
                solistas1++;
            }
            minutosJornada1+=duracionShow;
        }
        else if(jornada==2)
        {
            if(integrantes==1)
            {
                solistas2++;
            }
            minutosJornada2+=duracionShow;
        }
        else if(jornada==3)
        {
            if(integrantes==1)
            {
                solistas3++;
            }
            minutosJornada3+=duracionShow;
        }

        cout<<"Ingrese un numero de artista: ";
        cin>>nroArtista;
    }
    cout<<"Artista con el show mas largo en la jornada 1: "<<artistaShowLargoJornada1<<endl;
    cout<<"Cantidad de solistas de: "<<endl;
    cout<<"Jornada 1:"<<solistas1<<endl<<"Jornada 2:"<<solistas2<<endl<<"Jornada 3:"<<solistas3<<endl;
    promedio = duracionTotalShow/totalArtistas;
    if(minutosJornada1>minutosJornada2)
    {
        jornadaMasExtensa=1;
        minutosJornadaMasExtensa=minutosJornada1;
    }
    else
    {
        jornadaMasExtensa=2;
        minutosJornadaMasExtensa=minutosJornada2;
    }
    if(minutosJornada3>minutosJornadaMasExtensa)
    {
        jornadaMasExtensa=3;
        minutosJornadaMasExtensa=minutosJornada3;
    }
    cout<<"La jornada mas extensa fue la jornada "<<jornadaMasExtensa<<" con "<<minutosJornadaMasExtensa<<" minutos."<<endl;
    cout<<"La duracion promedio de show por artista es de "<<promedio<<" minutos."<<endl;
    return 0;
}
