#include <iostream>
using namespace std;

int main(){
    //Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
    //por un operario y el valor que se le paga por hora trabajada y listar por pantalla
    //el sueldo que le corresponda
    int horas, precio, sueldo;
    cout << "Ingrese el total de horas trabajadas"<<endl;
    cin >> horas;
    cout << "Ingrese el precio por hora"<< endl;
    cin >> precio;
    sueldo = horas * precio;
    cout << "El sueldo del trabajador es de $"<< sueldo <<endl;
    return 0;
}
