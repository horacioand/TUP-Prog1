#include <iostream>
using namespace std;
/*
Una Universidad dispone de diez aulas para acomodar a una cantidad de
asistentes a una charla. Cada aula tiene una capacidad total de 60 personas. Se
necesita un programa que solicite la cantidad de asistentes a la charla y
determine la cantidad total de aulas necesarias para acomodarlos a todos.
Por ejemplo:
Si los asistentes son 120 se necesitarán 2 aulas.
Si los asistentes son 123 se necesitarán 3 aulas.
Si los asistentes son 40 se necesitará 1 aula.
DESAFÍO: No utilizar el operador de división ni el de resto en el algoritmo.

*/

int main(){
    int asistentes;
    int capacidadAula=60, aula=1;
    cout<<"Ingrese la cantidad de asistentes: "; cin>>asistentes;

    while(asistentes>capacidadAula)
    {
        asistentes = asistentes-capacidadAula;
        aula++;
        if(aula==11){
            aula-=1;
            cout<<"No hay suficientes aulas, "<<asistentes<<" asistente/s quedaron fuera."<<endl;
            break;
        }
    }

    cout<<"La cantidad de aulas necesarias es "<<aula;
    return 0;
}
