#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar cinco números y listar cuantos de esos cinco
números son positivos, cuantos son negativos y cuantos son iguales a 0.*/
    int numero1,numero2,numero3,numero4,numero5,conPositivo=0,conNegativo=0,conCero=0;
    cout<<"Determinar cantidad de positivos, negativos y ceros."<<endl;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>numero1;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>numero2;
    cout<<"Ingrese el tercer numero: "<<endl;
    cin>>numero3;
    cout<<"Ingrese el cuarto numero: "<<endl;
    cin>>numero4;
    cout<<"Ingrese el quinto numero: "<<endl;
    cin>>numero5;

    if(numero1>0){
        conPositivo+=1;
    }else if(numero1<0){
        conNegativo+=1;
    }else{
        conCero+=1;
    }
    if(numero2>0){
        conPositivo+=1;
    }else if(numero2<0){
        conNegativo+=1;
    }else{
        conCero+=1;
    }
    if(numero3>0){
        conPositivo+=1;
    }else if(numero3<0){
        conNegativo+=1;
    }else{
        conCero+=1;
    }
    if(numero4>0){
        conPositivo+=1;
    }else if(numero4<0){
        conNegativo+=1;
    }else{
        conCero+=1;
    }
    if(numero5>0){
        conPositivo+=1;
    }else if(numero5<0){
        conNegativo+=1;
    }else{
        conCero+=1;
    }
    cout<<"Positivos: "<<conPositivo<<endl<<"Negativos: "<<conNegativo<<endl<<"Ceros: "<<conCero<<endl;

    return 0;
}
