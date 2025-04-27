#include <iostream>
using namespace std;
/*
 Una estaci�n meteorol�gica registr� una muestra clim�tica de los �ltimos 15
d�as. Por cada d�a registr�:
- N�mero de d�a (entero)
- Temperatura (float)
- Mil�metros de lluvia (float)
- Visibilidad en km (float)
Hay un registro por cada d�a. La informaci�n se encuentra ordenada por d�a. Se
pide calcular e informar:
- El n�mero del d�a que se haya registrado la temperatura m�xima.
- La amplitud t�rmica de todo el per�odo.
- La cantidad de d�as con neblina.
- Mostrar "Quincena lluviosa" si hubo m�s d�as de lluvia que d�as sin lluvia.
Mostrar "Quincena h�meda" si llovi� en al menos un tercio de los d�as.
De lo contrario mostrar "Quincena seca".
NOTA: La amplitud t�rmica es la diferencia entre la temperatura m�xima y la
temperatura m�nima.
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
