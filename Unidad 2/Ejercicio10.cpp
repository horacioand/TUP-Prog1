#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar cinco números y listar el máximo y el mínimo
de ellos*/
    int numero1, numero2, numero3, numero4, numero5, maximo, minimo;
    cout<<"Determinar el numero maximo y minimo."<<endl;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>numero1;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>numero2;
    cout<<"Ingrese el tercer numero: "<<endl;
    cin>>numero3;
    cout<<"Ingrese el cuerto numero: "<<endl;
    cin>>numero4;
    cout<<"Ingrese el quinto numero: "<<endl;
    cin>>numero5;

    if(numero1>numero2){
        maximo = numero1;
    }else{
        maximo=numero2;
    }
    if(numero1<numero2){
        minimo=numero1;
    }else{
        minimo=numero2;
    }

    if(numero3>maximo){
        maximo=numero3;
    }
    if(numero3<minimo){
        minimo=numero3;
    }
    if(numero4>maximo){
        maximo=numero4;
    }
    if(numero4<minimo){
        minimo=numero4;
    }
    if(numero5>maximo){
        maximo=numero5;
    }
    if(numero5<minimo){
        minimo=numero5;
    }

    cout<<"El numero mas grande es "<<maximo<<" y el mas pequeno es "<<minimo<<endl;

    return 0;
}
