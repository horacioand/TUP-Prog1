#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 10 números, luego informar el
porcentaje de positivos, negativos, y ceros.
*/

int main(){
//Declaracion de variables
    int numero, conPos=0, conNeg=0, conCero=0, conNum=0;
    float porcPos, porcNeg, porcCero;

//Proceso
    for(int i=0; i<10; i++){
        cout<<"Ingrese un numero: ";
        cin>>numero;
        conNum++;
        if(numero>0){
            conPos++;
        }else if(numero<0){
            conNeg++;
        }else{
            conCero++;
        }
    }
    porcPos = (float)conPos * 100 / conNum;
    porcNeg = (float)conNeg * 100 / conNum;
    porcCero = (float)conCero * 100 / conNum;

//Egreso
    cout<<"Porcentaje de numeros positivos ("<<conPos<<") :"<<porcPos<<endl;
    cout<<"Porcentaje de numeros negativos ("<<conNeg<<") :"<<porcNeg<<endl;
    cout<<"Porcentaje de numeros ceros ("<<conCero<<") :"<<porcCero<<endl;
    return 0;
}
