#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar un N valor que indica la cantidad de números
que componen una lista y luego solicitar se ingresen esos N números. Se pide
informar cuantos son positivos
Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se
listará: Cantidad de Positivos: 4
Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4.
Se listará: Cantidad de Positivos: 0
*/

int main(){
//Declaracion
    int largo, numero, conPos;
    cout<<"Ingrese el largo de su lista de numeros: ";
    cin>>largo; //Ingreso
    conPos=0;

//Ciclo for
    for(int i=0; i<largo; i++){
        cout<<"Ingrese un numero: ";    //Ingreso
        cin>>numero;
        if(numero>0){
            conPos++;
        }
        cout<<endl;
    }
    cout<<"La lista contiene "<<conPos<<" valores positivos."<<endl;    //Egreso

    return 0;
}
