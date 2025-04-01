#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar tres números diferentes y determinar e
informar el número del medio.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8*/
    int numero1,numero2,numero3, medio;
    cout<<"Determinar el numero central entre tres numeros."<<endl;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>numero1;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>numero2;
    cout<<"Ingrese el tercer numero: "<<endl;
    cin>>numero3;

    if(numero1>numero2&&numero1<numero3){
        medio=numero1;
    }else if(numero2>numero1&&numero2<numero3){
        medio=numero2;
    }else{
    medio=numero3;
    }
    cout<<"El numero del medio es "<<medio<<endl;

    return 0;
}
