#include <iostream>
using namespace std;
/*
La cuenta corriente de una famosa cantante ha registrado 14 movimientos
durante la semana pasada. Por cada movimiento se registr�:
- N�mero de movimiento
- D�a
- Tipo ('E' - Extracci�n / 'D' - Dep�sito)
- Importe
Existe un registro por movimiento. Se desea calcular e informar:
- El saldo final de la cuenta.
- El porcentaje de movimientos de extracci�n y el porcentaje de dep�sito.
- El dep�sito de mayor importe indicando tambi�n d�a y n�mero de
movimiento.
- La cantidad de movimientos del d�a 10.

*/

int main(){
    int numeroMovimiento, dia, diaMayor, numeroMayor, contadorExtraccion=0, contadorDeposito=0, contador=0, contadorDia10=0;
    float importe, saldo=0, porcentajeExtraccion, porcentajeDeposito, mayorDeposito;
    char tipo;

    for(int i=0; i<3; i++){
        cout<<"Ingrese los datos del movimiento: "<<endl;
        cout<<"Numero de movimiento: ";
        cin>>numeroMovimiento;
        cout<<"Dia: ";
        cin>>dia;
        cout<<"Tipo: ('E' - Extracci�n / 'D' - Dep�sito)";
        cin>>tipo;
        cout<<"Importe: ";
        cin>>importe;
        cout<<endl<<endl;
        if(dia==10){
            contadorDia10++;
        }

        if(toupper(tipo)=='D'){
            saldo = saldo + importe;
            contadorDeposito++;
            contador++;

            if(i==0){
                mayorDeposito=importe;
                diaMayor=i+1;
                numeroMayor=numeroMovimiento;
            }else{
                if(importe>mayorDeposito){
                    mayorDeposito=importe;
                    diaMayor=i+1;
                    numeroMayor=numeroMovimiento;
                }
            }

        }else if(toupper(tipo)=='E'){
            saldo = saldo - importe;
            contadorExtraccion++;
            contador++;
        }
    }

    porcentajeDeposito = (float)contadorDeposito * 100 / contador;
    porcentajeExtraccion = 100 - porcentajeDeposito;

    cout<<"Saldo final de la cuenta: "<<saldo<<endl;
    cout<<"Movimientos totales: "<<contador<<". %Extracciones: "<<porcentajeExtraccion<<". %Depositos: "<<porcentajeDeposito<<endl;
    cout<<"Deposito de mayor importe: "<<mayorDeposito<<". Dia: "<<diaMayor<<". Numero de movimiento: "<<numeroMayor<<endl;
    cout<<"Cantidad de movimientos del dia 10: "<<contadorDia10<<endl;

    return 0;
}

