#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar por teclado dos números y luego informar por
pantalla la diferencia entre ambos.
Ejemplo A: Si se ingresan 3 y 8 se emite 5. Si se ingresan 8 y 3 se emite 5.
Ejemplo B: Si se ingresan -3 y 9 se emite 12. Si se ingresan -12 y -1 se emite 11.
Ejemplo C: Si se ingresan -3 y -9 se emite 6. Si se ingresan -12 y -9 se emite 3.
Importante: Verifique que el programa emite SIEMPRE UN VALOR POSITIVO
porque la diferencia absoluta siempre es un valor positivo.
*/
    int numero1, numero2, diferencia;
    cout<<"Calcular la diferencia entre dos numeros."<<endl;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>numero1;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>numero2;
    if(numero1>=numero2){
        diferencia = numero1-numero2;
    }else{
        diferencia = numero2-numero1;
    }
    if(diferencia<0){
        diferencia *= -1;
    }
    cout<<"La diferencia entre el numero "<< numero1<<" y el numero "<<numero2<<" es "<<diferencia<<endl;

    return 0;
}
