#include <iostream>
using namespace std;

int main(){
/*Hacer un programa para ingresar por teclado la fecha de nacimiento de una
persona, ingresando d�a, mes y a�o como 3 datos individuales. Luego ingresar
la fecha actual ingresando d�a, mes y a�o como 3 datos individuales. Calcular
luego la edad en a�os de esa persona y listar por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 18 ya que los 19 reci�n los cumple en
diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual
es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 d�as para cumplir
los 19 a�os.
*/
    int dia, mes, anio, edad, diaActual, mesActual, anioActual;
    cout<<"Calcular edad de una persona."<<endl;
    cout<<"Ingrese el dia de nacimiento"<<endl;
    cin>>dia;
    cout<<"Ingrese el mes de nacimiento"<<endl;
    cin>>mes;
    cout<<"Ingrese el a�o de nacicmiento"<<endl;
    cin>>anio;

    cout<<"Ingrese el dia actual"<<endl;
    cin>>diaActual;
    cout<<"Ingrese el mes actual"<<endl;
    cin>>mesActual;
    cout<<"Ingrese el a�o actual"<<endl;
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
    cout<<"La edad de la persona es "<<edad<<" a�os"<<endl;
    return 0;
}
