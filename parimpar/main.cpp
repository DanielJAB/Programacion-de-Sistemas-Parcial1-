#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int numero;
int main()
{
    cout<<"Ingrese un numero: ";
    cin>>numero;

    if(numero<0)
    numero*= -1;
        if (numero%2==0)
            cout<<"El numero es par";
            else
                cout<<"El numero es Impar";

    cout<<"\n";
    system("PAUSE");
}
