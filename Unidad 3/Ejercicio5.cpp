#include <iostream>
using namespace std;

/*
Hacer un programa para que el usuario ingrese dos números y luego el
programa muestre por pantalla los números entre el menor y el mayor de
ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15
y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
*/

int main(){

//Declaracion
    int numero1, numero2;

//Ingreso
    cout<<"Ingrese dos numeros."<<endl;
    cout<<"Numero 1: ";
    cin>>numero1;
    cout<<"Numero 2: ";
    cin>>numero2;

//Proceso
    if(numero1>numero2){
        for(numero2=numero2+1; numero2<numero1; numero2++){
            cout<<numero2<<endl;
        }
    }else{
        for(numero1=numero1+1; numero1<numero2; numero1++){
            cout<<numero1<<endl;
        }
    }


    return 0;
}
