#include <iostream>
using namespace std;

/*
Dada una lista de 7 números enteros informar cual es el primer, el segundo, el
anteúltimo y el último número impar ingresado.
Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7,
Anteúltimo impar: 9 y Último impar: 5.
*/

int main(){
//Declaracion
    int numero, anteultimo, ultimo, contador=0, imp1=0, imp2=0, imp3=0, imp4=0, imp5=0, imp6=0, imp7=0;
    for(int i=0; i<7; i++){
        cout<<"Ingrese un numero: ";
        cin>>numero;

        if(numero%2!=0){
            contador++;
            if(contador==1)
                imp1=numero;
            else if(contador==2)
                imp2=numero;
            else if(contador==3)
                imp3=numero;
            else if(contador==4)
                imp4=numero;
            else if(contador==5)
                imp5=numero;
            else if(contador==6)
                imp6=numero;
            else if(contador==7)
                imp7=numero;
        }
    }
    if(contador>= 1)
        cout<<"Primer impar: "<<imp1<<endl;
    else
        cout<<"No se ingresaron numeros impares."<<endl;

    if(contador>=2)
        cout<<"Segundo impar: "<<imp2<<endl;

    if(contador>=2){
        if(contador==2){
            anteultimo=imp1;
            ultimo=imp2;
        }else if(contador==3){
            anteultimo=imp2;
            ultimo=imp3;
        }else if(contador==4){
            anteultimo=imp3;
            ultimo=imp4;
        }else if(contador==5){
            anteultimo=imp4;
            ultimo=imp5;
        }else if(contador==6){
            anteultimo=imp5;
            ultimo=imp6;
        }else if(contador==7){
            anteultimo=imp6;
            ultimo=imp7;
        }
        cout<<"Anteultimo impar: "<<anteultimo<<endl;
        cout<<"Ultimo impar: "<<ultimo;
    }

    return 0;
}
