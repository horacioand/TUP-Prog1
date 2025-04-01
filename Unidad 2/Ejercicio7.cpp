#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar por teclado tres números e informar con una
leyenda aclaratoria si los tres son todos distintos entre sí, caso contrario no
emitir nada.
Tener en cuenta: Si A es distinto de B y B es distinto de C, eso no significa que A
y C sean distintos. Ejemplo: A=8, B=6 y C=8.
*/
    int numero1, numero2, numero3;
    cout<<"Determinar desigualdad entre tres numeros."<<endl;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>numero1;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>numero2;
    cout<<"Ingrese el tercer numero: "<<endl;
    cin>>numero3;
    if(numero1!=numero2&&numero2!=numero3&&numero1!=numero3){
        cout<<"Los numeros ingresados son distintos"<<endl;
    }

    return 0;
}
