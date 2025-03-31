#include <iostream>
using namespace std;

int main(){
/*Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más
$700 de premio por cada auto vendido. Hacer un programa que permita
ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
informar por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a
pagar es de $7800.
*/
int autosVendidos, sueldo;
cout << "Ingrese la cantidad de autos vendidos:"<<endl;
cin >> autosVendidos;
sueldo = 5000 + (autosVendidos*700);
cout << "El sueldo correspondiente a " << autosVendidos << " autos vendidos es de $" << sueldo;
return 0;
}
