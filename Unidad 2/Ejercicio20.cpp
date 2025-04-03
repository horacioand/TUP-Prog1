#include <iostream>
using namespace std;

int main(){
/* Hacer un programa en el que se ingrese la edad y altura de 5 personas. Luego,
calcular e informar:
- La cantidad de personas mayores a 30 años que midan más de 1.8
metros.
- El promedio de altura de las personas mayores a 30 años.
- La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
- La cantidad de personas cuya edad sea de 20, 30 o 40 años.
*/
    int edad1, edad2, edad3, edad4, edad5, conPersona;
    float altura1, altura2, altura3, altura4, altura5, acuAltura, conAltura, promedio;
    cout<<"Ingrese los datos correspondientes..."<<endl;
    cout<<"Persona 1. Edad: "<<endl;
    cin>>edad1;
    cout<<"Persona 1. Altura: "<<endl;
    cin>>altura1;

    cout<<"Persona 2. Edad: "<<endl;
    cin>>edad2;
    cout<<"Persona 2. Altura: "<<endl;
    cin>>altura2;

    cout<<"Persona 3. Edad: "<<endl;
    cin>>edad3;
    cout<<"Persona 3. Altura: "<<endl;
    cin>>altura3;

    cout<<"Persona 4. Edad: "<<endl;
    cin>>edad4;
    cout<<"Persona 4. Altura: "<<endl;
    cin>>altura4;

    cout<<"Persona 5. Edad: "<<endl;
    cin>>edad5;
    cout<<"Persona 5. Altura: "<<endl;
    cin>>altura5;
    //- La cantidad de personas mayores a 30 años que midan más de 1.8 metros.
    conPersona=0;
    if(edad1>30&&altura1>1.8){
        conPersona+=1;
    }
    if(edad2>30&&altura2>1.8){
        conPersona+=1;
    }
    if(edad3>30&&altura3>1.8){
        conPersona+=1;
    }
    if(edad4>30&&altura4>1.8){
        conPersona+=1;
    }
    if(edad5>30&&altura5>1.8){
        conPersona+=1;
    }
    cout<<"La cantidad de personas mayores a 30 con una altura mayor a 1.8m es de "<<conPersona<<endl;
    //- El promedio de altura de las personas mayores a 30 años.
    conAltura=0;
    acuAltura=0;
    if(edad1>30){
        conAltura++;
        acuAltura+=edad1;
    }
    if(edad2>30){
        conAltura++;
        acuAltura+=edad2;
    }
    if(edad3>30){
        conAltura++;
        acuAltura+=edad3;
    }
    if(edad4>30){
        conAltura++;
        acuAltura+=edad4;
    }
    if(edad5>30){
        conAltura++;
        acuAltura+=edad5;
    }
    promedio = acuAltura/conAltura;
    cout<<"El promedio de altura de las personas mayores a 30 es "<<promedio<<" metros"<<endl;
    // - La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
    conAltura=0;
    if(altura1>=1.7&&altura1<=1.8){
        conAltura++;
    }
    if(altura2>=1.7&&altura2<=1.8){
        conAltura++;
    }
    if(altura3>=1.7&&altura3<=1.8){
        conAltura++;
    }
    if(altura4>=1.7&&altura4<=1.8){
        conAltura++;
    }
    if(altura5>=1.7&&altura5<=1.8){
        conAltura++;
    }
    cout<<"La cantidad de personas con una altura entre 1.7 y 1.8 es de "<<conAltura<<endl;
    //- La cantidad de personas cuya edad sea de 20, 30 o 40 años.
    conPersona=0;
    if(edad1==20||edad1==30||edad1==40){
        conPersona++;
    }
    if(edad2==20||edad2==30||edad2==40){
        conPersona++;
    }
    if(edad3==20||edad3==30||edad3==40){
        conPersona++;
    }
    if(edad4==20||edad4==30||edad4==40){
        conPersona++;
    }
    if(edad5==20||edad5==30||edad5==40){
        conPersona++;
    }
    cout<<"La cantidad de personas con una edad de 20, 30 o 40 es de: "<<conPersona<<endl;
    return 0;
}



