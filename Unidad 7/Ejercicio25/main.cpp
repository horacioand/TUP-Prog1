#include <iostream>

using namespace std;
/*
Una agencia de viajes comercializa 20 planes de turismo, para cada uno de
ellos se generó un registro con los siguientes datos:
● Número de plan (1 a 20)
● Precio al contado
● Precio con tarjeta
Los precios son por persona, estos datos se ingresan desordenados.
Existe un segundo lote con las ventas efectuadas durante el mes pasado en los
8 locales de atención al público.
Por cada venta que se concretó se dispone de los siguientes datos:
● Número de local (1 a 8)
● Número de plan contratado (1 a 20)
● Cantidad de personas que viajan
● Código de pago (1= contado,2= tarjeta)
Este lote finaliza con un registro con número de local igual a 9. A partir de esta
información se pide:
a) Informar el total recaudado por la empresa por pago al contado y por pago
con tarjeta entre todos los locales.
b) Informar cuál fue el plan que eligieron más personas en total.
*/
int main()
{
    int numeroPlan[20] = {0}, mayor=0, planMasContratado; //contador de planes contratados
    float precioContado[20], precioTarjeta[20];

    int numeroLocal, numeroPlanContratado, numeroPersonas, codigoPago;
    float recaudoTarjeta=0, recaudoContado=0;
    //precarga de planes p/ejemplo
    for(int i=0; i<20; i++)
    {
        precioContado[i] = (i*1 + 100);
        precioTarjeta[i] = precioContado[i] + (precioContado[i]*0.2);
    }


    cout << "Ingrese el numero del local(1 a 8, 9 para terminar) : ";
    cin >> numeroLocal;

    while(numeroLocal!=9)
    {
        cout << "Ingrese numero de plan contratado(1 a 20): ";
        cin >> numeroPlanContratado;
        if(numeroPlanContratado>0 && numeroPlanContratado<=20)
        {
            cout << "Ingrese numero de personas: ";
            cin >> numeroPersonas;
            if(numeroPersonas>0)
            {
                cout << "Ingrese codigo de pago (1: Contado, 2: Tarjeta): ";
                cin >> codigoPago;
                if(codigoPago>0 && codigoPago<=2)
                {
                    if(codigoPago==1)
                    {
                        recaudoContado += (precioContado[numeroPlanContratado-1])*numeroPersonas;
                        numeroPlan[numeroPlanContratado-1] += numeroPersonas; //suma 1 plan contratado por cada persona
                    }
                    else if(codigoPago==2)
                    {
                        recaudoTarjeta += (precioTarjeta[numeroPlanContratado-1])*numeroPersonas;
                        numeroPlan[numeroPlanContratado-1] += numeroPersonas;
                    }
                }
                else
                {
                    cout << "Ingrese un codigo de pago válido...";
                }
            }
            else
            {
                cout << "Ingrese un numero de personas mayor a cero...";
            }
        }
        else
        {
            cout << "Ingrese un numero de plan válido..." << endl;
        }

        system("cls");
        cout << "Ingrese el numero del local(1 a 8, 9 para terminar) : ";
        cin >> numeroLocal;
    }

    system("cls");
    cout << "Total recaudado:" << endl;
    cout << "  Pago efectivo: $" << recaudoContado << endl;
    cout << "  Pago tarjeta: $"<< recaudoTarjeta << endl;

    for(int i=0; i<20; i++)
    {
        if(numeroPlan[i]>mayor)
        {
            mayor = numeroPlan[i];
            planMasContratado = i+1;
        }
    }
    cout << "Plan mas contratado: " << planMasContratado << ". Con " << mayor << " personas que lo eligieron.";
    return 0;
}
