#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar tres números distintos y listarlos ordenados
de menor a mayor.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
Si N1=8, N2=6, N3=10 ó N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=8, N3=10 ó N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=10, N3=8 ó N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.
*/
    int numero1,numero2,numero3;
    cout<<"Ordenar numeros de menor a mayor."<<endl;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>numero1;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>numero2;
    cout<<"Ingrese el tercer numero: "<<endl;
    cin>>numero3;
    if(numero1<numero2&&numero2<numero3){
        cout<<numero1<<" "<<numero2<<" "<<numero3<<endl;
    }else if(numero2<numero1&&numero1<numero3){
        cout<<numero2<<" "<<numero1<<" "<<numero3<<endl;
    }else if(numero3<numero1&&numero1<numero2){
        cout<<numero3<<" "<<numero1<<" "<<numero2<<endl;
    }else if(numero3<numero2&&numero2<numero1){
        cout<<numero3<<" "<<numero2<<" "<<numero1<<endl;
    }else{
        cout<<numero2<<" "<<numero3<<" "<<numero1<<endl;
    }
    return 0;
}
