#include <iostream>
using namespace std;

int main(){
/*Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por
teclado la longitud de los tres lados de un tri�ngulo y luego listar qu� tipo de
tri�ngulo es:
- Equil�tero: si los tres lados son iguales.
- Is�sceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre s�*/
    int lado1, lado2, lado3;
    string tipo;
    cout<<"Determinar tipo de triangulo."<<endl;
    cout<<"Ingresar la longitud del primer lado: "<<endl;
    cin>>lado1;
    cout<<"Ingresar la longitud del segundo lado: "<<endl;
    cin>>lado2;
    cout<<"Ingresar la longitud del tercer lado: "<<endl;
    cin>>lado3;
    if(lado1==lado2&&lado2==lado3){
        tipo = "Equilatero";
    }else if(lado1==lado2||lado2==lado3||lado1==lado3){
        tipo = "Isoceles";
    }else{
        tipo = "Escaleno";
    }
    cout<<"El tipo de triangulo es "<<tipo<<endl;

    return 0;
}
