#include <iostream>
using namespace std;
int main(){
    /*Hacer un programa para que un comercio ingrese por teclado la recaudación en
pesos para cada una de las cuatro semanas del mes. El programa debe listar la
recaudación promedio por semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación
promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
*/

    int recSemana1, recSemana2, recSemana3, recSemana4, recTotal;
    float porcSem1, porcSem2, porcSem3, porcSem4, recPromedio;
     cout<< "Ingrese la recaudacion en pesos de cada semana:"<<endl;
     cout<<"Semana 1:"<<endl;
     cin>>recSemana1;
     cout<<"Semana 2:"<<endl;
     cin>>recSemana2;
     cout<<"Semana 3:"<<endl;
     cin>>recSemana3;
     cout<<"Semana 4:"<<endl;
     cin>>recSemana4;
     recTotal = recSemana1 + recSemana2 + recSemana3 + recSemana4;
     recPromedio = (float)recTotal / 4;
     porcSem1 = (float)recSemana1 * 100 / recTotal;
     porcSem2 = (float)recSemana2 * 100 / recTotal;
     porcSem3 = (float)recSemana3 * 100 / recTotal;
     porcSem4 = (float)recSemana4 * 100 / recTotal;
     cout<< "La recaudacion promedio es de $" <<recPromedio;
     cout<< "El porcentaje de recaudacion por semana es de: "<<endl;
     cout<< "Semana 1:" <<porcSem1<<endl;
     cout<< "Semana 2:" <<porcSem2<<endl;
     cout<< "Semana 3:" <<porcSem3<<endl;
     cout<< "Semana 4:" <<porcSem4<<endl;

}
