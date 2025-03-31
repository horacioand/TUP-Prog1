#include <iostream>
using namespace std;

int main(){
/*Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
programa para ingresar por teclado la cantidad de alfajores vendidos de cada
una de las tres marcas y luego se informe el porcentaje de ventas para cada
una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el
programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.
*/
int marcaA, marcaB, marcaC, total;
float porcA, porcB, porcC;
cout << "Ingrese la cantidad de alfajores para cada marca:"<<endl;
cout<<"A:"<<endl;
cin >> marcaA;
cout<<"B:"<<endl;
cin>> marcaB;
cout<<"C:"<<endl;
cin >> marcaC;

total = marcaA + marcaB + marcaC;
porcA = (float)marcaA * 100 / total;
porcB = (float)marcaB * 100 / total;
porcC = (float)marcaC * 100 / total;

cout << "El pocentaje de alfajores vendidos por cada marca es de: "<<endl;
cout << "A: %"<<porcA<<endl;
cout << "B: %"<<porcB<<endl;
cout << "C: %"<<porcC<<endl;
return 0;
}
