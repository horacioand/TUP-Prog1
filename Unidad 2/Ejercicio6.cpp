#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar por teclado tres números y luego determinar e
informar con una leyenda aclaratoria si los tres son iguales entre sí, caso
contrario no emitir nada.
Tener en cuenta: Si A es igual a B y B es igual a C, entonces A y C son iguales.
*/
    int numero1, numero2, numero3;
    cout<<"Determinar igualdad entre tres numeros"<<endl;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>numero1;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>numero2;
    cout<<"Ingrese el tercer numero: "<<endl;
    cin>>numero3;
    if(numero1==numero2&&numero2==numero3){
        cout<<"Los numeros son iguales"<<endl;
    }

    return 0;
}
