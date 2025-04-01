#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar por teclado dos números y luego informar por
pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo.*/
    int numero1, numero2;
    cout<<"Determinar si el primer numero es multiplo del segundo"<<endl;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>numero1;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>numero2;
    if(numero1%numero2==0){
        cout<<"El primer numero es multiplo del segundo"<<endl;
    }else{
        cout<<"El primer numero NO es multiplod el segundo"<<endl;
    }

    return 0;
}
