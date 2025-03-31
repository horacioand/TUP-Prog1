#include <iostream>
using namespace std;
int main(){
/*Hacer un programa que solicite por teclado que se ingresen dos números y
luego guardarlos en dos variables distintas. A continuación se deben
intercambiar mutuamente los valores en ambas variables y mostrarlos por
pantalla.
Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables
usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.*/

int a,b,c;
cout << "Ingrese dos numeros:"<<endl;
cin >> a >> b;
cout << "Los numeros son: a=" <<a<<" b="<<b<<endl;
c = a;
a = b;
b = c;
cout << "Los numeros intercambiados son: a=" <<a<<" b="<<b<<endl;
return 0;}
