#include <iostream>
using namespace std;
/*
Dada una lista de 7 números enteros todos distintos entre sí determinar e
informar con un cartel aclaratorio si los números primos ingresados en la
misma están ordenados de menor a mayor. Los números primos pueden no ser
consecutivos, pero sí estar ordenados.
Ejemplo A: 4, 5, 7, 12, 13, 19, 20. Se emite un cartel que diga “Ordenados” ya que
los números primos están ordenados: 5, 7, 13, 19.
Ejemplo B: 4, 10, 3, 5, 11, 7, 14. Se emite un cartel que diga “Desordenados” ya
que los números primos no están ordenados: 3, 5, 11, 7.

*/

int main(){
    int numero, primoAnterior, primoActual, contador;
    bool hayPrimo=false, ordenado=true;

    for(int i=0; i<7; i++){
        cout<<"Ingrese un numero: ";
        cin>>numero;
        contador=0;

        for(int x=1; x<=numero; x++){
            if(numero%x==0){
                contador++;
            }
        }
        if(contador==2){
            if(hayPrimo==false){
                hayPrimo=true;
                primoActual=numero;
            }else{
                primoAnterior=primoActual;
                primoActual=numero;
            }
        }
        if(primoAnterior>primoActual){
            ordenado=false;
        }
    }
    if(ordenado==false){
        cout<<"Desordenados"<<endl;
    }else{
        cout<<"Ordenados";
    }


    return 0;
}
