#include <iostream>
using namespace std;
/*
 Se dispone de la información de los exámenes rendidos por algunos
estudiantes de la UTN FRGP. Por cada registro de examen se conoce:
- Legajo del estudiante (entero)
- Código de materia (entero)
- Nota (float)
La finalización de la carga de datos se indica con un legajo de estudiante mayor
a 30000. Calcular e informar:
- La nota promedio entre todos los estudiantes.
- El legajo del estudiante con menor nota.
- La cantidad de exámenes rendidos para la materia 10.
- El porcentaje de aprobados y no aprobados.
NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.
*/

int main()
{
    int conExamenes=0, conMateria10=0, conAprobados=0, legajo, codMateria,  legajoMenorNota, menorNota;
    float nota, notaPromedio, porcAprobados, porcDesaprobados, acuPromedio=0;
    bool hayMenor = false;
    cout<<"Ingrese el legajo: "; cin>> legajo;

    while(legajo<=30000)
    {
        cout<<"Ingrese el codigo de materia: "; cin>> codMateria;
        cout<<"Ingrese la nota: "; cin>> nota;

        //contador materia 10
        if(codMateria==10){
            conMateria10++;
        }

        //menor nota
        if(!hayMenor)
        {
            menorNota=nota;
            legajoMenorNota=legajo;
            hayMenor=true;
        }
        else
        {
            if(nota<menorNota)
            {
                menorNota=nota;
                legajoMenorNota=legajo;
            }
        }

        //nota promedio
        conExamenes++;
        acuPromedio += nota;

        //porcentaje aprobacion
        if(nota>=6){
            conAprobados++;
        }

        cout<<"Ingrese el legajo: "; cin>> legajo;
    }
    //porcentaje aprobacion
    porcAprobados=float(conAprobados*100)/conExamenes;
    porcDesaprobados=(float)100-porcAprobados;
    cout<<"Porcentaje de alumnos aprobados: "<<porcAprobados<<" .Porcentaje de alumnos desaprobados: "<<porcDesaprobados<<endl;
    //nota promedio
    notaPromedio = (float)acuPromedio/conExamenes;
    cout<<"La nota promedio es "<< notaPromedio<<endl;
    //menor nota
    cout<<"La nota mas baja es "<<menorNota<<" del legajo "<<legajoMenorNota<<endl;
    //materia 10
    cout<<"La cantidad de examenes rendidos para la materia 10 es de: "<<conMateria10<<endl;

    return 0;
}
