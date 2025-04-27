#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3,n4,n5, maximo, minimo;

    cout<<"Ingreso:"<<endl;
    cin>>n1>>n2>>n3>>n4>>n5;
    maximo = n1;
    minimo = n1;
    if(n2>maximo)
        maximo=n2;
    else
        if(n3>maximo)
            maximo=n3;
        else
            if(n4>maximo)
                maximo=n4;
            else
                if(n5>maximo)
                    maximo=n5;

    cout<<"Maximo: "<<maximo;
}
