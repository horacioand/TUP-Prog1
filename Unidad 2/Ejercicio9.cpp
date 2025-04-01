#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar tres números y listar el máximo de ellos.
*/
    int numero1,numero2,numero3, maximo;
    cout<<"Determinar el maximo numero."<<endl;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>numero1;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>numero2;
    cout<<"Ingrese el tercer numero: "<<endl;
    cin>>numero3;
    if(numero1>numero2){
        maximo=numero1;
    }else{
        maximo=numero2;
    }
    if(numero3>maximo){
        maximo=numero3;
    }
    cout<<"El numero mas grande es "<<maximo<<endl;

    return 0;
}
