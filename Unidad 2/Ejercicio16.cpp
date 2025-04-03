#include <iostream>
using namespace std;

int main(){
    /*Hacer un programa para ingresar por teclado las cuatro notas de los exámenes
obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las
siguientes condiciones:
- “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los
exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial.
*/
    int nota1, nota2, nota3, nota4,con;
    cout<<"Ingrese las notas de los examenes."<<endl;
    cout<<"Nota 1: "<<endl;
    cin>>nota1;
    cout<<"Nota 2: "<<endl;
    cin>>nota2;
    cout<<"Nota 3: "<<endl;
    cin>>nota3;
    cout<<"Nota 4: "<<endl;
    cin>>nota4;

    if(nota1>6&&nota2>6&&nota3>6&&nota4>6){
        cout<<"Promociona!"<<endl;
    }else{
        if(nota1>3){
            con++;
        }
        if(nota2>3){
            con++;
        }
        if(nota3>3){
            con++;
        }
        if(nota4>3){
            con++;
        }
        if(con>=3){
            cout<<"Rinde examen final."<<endl;
        }else if(con>=1){
            cout<<"Recupera parciales."<<endl;
        }else{
            cout<<"Recursa la materia :("<<endl;
        }
    }

    return 0;
}
