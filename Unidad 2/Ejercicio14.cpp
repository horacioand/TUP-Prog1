#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar por teclado la fecha de nacimiento de una
persona, ingresando día, mes y año como 3 datos individuales. Luego ingresar
la fecha actual ingresando día, mes y año como 3 datos individuales. Calcular
luego la edad en años de esa persona y listar por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 18 ya que los 19 recién los cumple en
diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 días para cumplir
los 19 años.
*/
    int dia, mes, anio, edad, diaActual, mesActual, anioActual;
    cout<<"Calcular edad de una persona."<<endl;
    cout<<"Ingrese el dia de nacimiento"<<endl;
    cin>>dia;
    cout<<"Ingrese el mes de nacimiento"<<endl;
    cin>>mes;
    cout<<"Ingrese el año de nacicmiento"<<endl;
    cin>>anio;

    cout<<"Ingrese el dia actual"<<endl;
    cin>>diaActual;
    cout<<"Ingrese el mes actual"<<endl;
    cin>>mesActual;
    cout<<"Ingrese el año actual"<<endl;
    cin>>anioActual;

    edad = anioActual - anio;
    if(mesActual<mes){
        edad-=1;
    }
    if(mesActual=mes){
       if(diaActual<dia){
        edad-=1;
       }
    }
    cout<<"La edad de la persona es "<<edad<<" años"<<endl;
    return 0;
}
