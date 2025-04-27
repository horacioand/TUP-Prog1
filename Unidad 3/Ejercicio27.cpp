#include <iostream>
using namespace std;
/*
 Una estación meteorológica registró una muestra climática de los últimos 15
días. Por cada día registró:
- Número de día (entero)
- Temperatura (float)
- Milímetros de lluvia (float)
- Visibilidad en km (float)
Hay un registro por cada día. La información se encuentra ordenada por día. Se
pide calcular e informar:
- El número del día que se haya registrado la temperatura máxima.
- La amplitud térmica de todo el período.
- La cantidad de días con neblina.
- Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia.
Mostrar "Quincena húmeda" si llovió en al menos un tercio de los días.
De lo contrario mostrar "Quincena seca".
NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la
temperatura mínima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.

*/

int main()
{
    int dia, diaMaximaTemperatura, contadorDiasNeblina=0, contadorDiasLluviosos=0;
    float temperatura, temperaturaMaxima, temperaturaMinima, mmLluvia, visibilidadKm, amplitudTermica;

    for(int i=0; i<15; i++)
    {
        cout<<"Ingrese el dia: ";
        cin>>dia;
        cout<<"Ingrese la temperatura: ";
        cin>>temperatura;
        cout<<"Ingrese los mm de lluvia: ";
        cin>>mmLluvia;
        cout<<"Ingrese la visibilidad en km: ";
        cin>>visibilidadKm;

        if(i==0)
        {
            diaMaximaTemperatura=i;
            temperaturaMaxima=temperatura;
            temperaturaMinima=temperatura;
        }
        if(temperatura>temperaturaMaxima)
        {
            diaMaximaTemperatura=dia;
            temperaturaMaxima=temperatura;
        }
        if(temperatura<temperaturaMinima)
        {
            temperaturaMinima=temperatura;
        }

        amplitudTermica = temperaturaMaxima - temperaturaMinima;
        if(visibilidadKm<2)
        {
            contadorDiasNeblina++;
        }
        if(mmLluvia>0)
        {
            contadorDiasLluviosos++;
        }
    }
    cout<<"Dia con mayor temperatura: "<<diaMaximaTemperatura<<endl;
    cout<<"Amplitud termica de todo el periodo: "<<amplitudTermica<<endl;
    cout<<"Cantidad de dias con neblina: "<<contadorDiasNeblina<<endl;
    if(contadorDiasLluviosos>(15/2))
    {
        cout<<"Quincena lluviosa"<<endl;
    }
    else if(contadorDiasLluviosos>(15/3))
    {
        cout<<"Quincena lluviosa"<<endl;
    }
    else
    {
        cout<<"Quincena seca"<<endl;
    }
    return 0;
}
