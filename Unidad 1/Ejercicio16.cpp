#include <iostream>
using namespace std;

int main(){
/*El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada
frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de
Micilina y 7 mg de Ácido Sinítico.
Nos solicitan un programa donde se ingrese la cantidad de frascos de un
pedido y muestre la cantidad de miligramos de Betamol, Micilina y de Ácido
Sinítico que son necesarios para elaborarlos.*/
    int frascos, betamol, micilina, sinitico, pildoras;
    cout<<"Ingrese la cantidad de frascos solicitados:"<<endl;\
    cin>>frascos;
    pildoras = frascos * 75;
    betamol = pildoras * 45;
    micilina = pildoras * 2000;
    sinitico = pildoras * 7;
    cout<<"En "<<frascos<<" frascos con un total de "<<pildoras<<" pildoras habra un total de:"<<endl;
    cout<<betamol<<" mg de betamol."<<endl<<micilina<<" mg de micilina."<<endl<<sinitico<<" mg de sinitico."<<endl;


    return 0;
}
