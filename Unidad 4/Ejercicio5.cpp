#include <iostream>
using namespace std;
/*
Hacer un programa para que el usuario ingrese dos n�meros y luego el
programa muestre por pantalla los n�meros entre el menor y el mayor de
ambos. Ejemplo, si el usuario ingresa 3 y 15, se mostrar�n los n�meros entre el
3 y el 15; y si el usuario ingresa 25 y 8, se mostrar�n los n�meros entre el 8 y el
25.
*/

int main(){
    int num1, num2;
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;
    if(num1>num2){
        while(num2<num1-1){
            cout<<num2+1<<endl;
            num2++;
        }
    }else{
        while(num1<num2-1){
            cout<<num1+1<<endl;
            num1++;
        }
    }
    return 0;
}
