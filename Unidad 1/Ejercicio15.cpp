#include <iostream>
using namespace std;

int main(){
/*La amplitud térmica es la diferencia entre la temperatura máxima y la
temperatura mínima en una zona y tiempo determinado. Dada la temperatura
máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la
amplitud térmica.
NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al
de la temperatura mínima.
*/
    int tempMax, tempMin, amplitud;
    cout<<"Ingrese la temperatura maxima:"<<endl;
    cin>>tempMax;
    cout<<"Ingrese la temperatura minima:"<<endl;
    cin>>tempMin;
    amplitud = tempMax-tempMin;
    cout<<"La amplitud termica es de: "<<amplitud<<" grados"<<endl;

    return 0;
}
