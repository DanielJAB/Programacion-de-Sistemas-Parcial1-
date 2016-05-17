#include <iostream>  //ingrear 3 numeros y decir cual es mayor ... DESPUES decir si fueron ingresados de forma ascendente
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int n1,n2,n3;

int main()
{
    cout<<"Ingrese numero 1 >";
    cin>> n1;

    cout<<"Ingrese numero 2 >";
    cin>> n2;

    cout<<"Ingrese numero 3 >";
    cin>> n3;

    if ((n1>n2) and (n1>n3))
    {
        cout<<"Numero mayor es "<<n1;
    }
    else if (n2>n3)
    {
        cout<<"Numero mayor es "<<n2;
    }
    else
    {
        cout<<"Numero mayor es "<<n3;
    }

    cout<<"\n";


    if ((n1<n2) and (n2<n3))
    {
        cout<<"El numero fue ingresado de forma ASCENDENTE";
    }
    else
    {
        cout<<"El numero NO fue ingresado de forma ascendente";
    }
    cout<<"\n";
        system("PAUSE");
}
