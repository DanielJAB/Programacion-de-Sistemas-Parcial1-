#include <iostream>
#include <stdlib.h> //ingresar un numero y decir si es divisible entre 5 ... usar % porque devuelve el residuo de la div.
#include <stdio.h>

using namespace std;
int numero;

int main()
{
    cout<<"Ingresar un numero...>";
    cin>>numero;

    if (numero % 5==0)
    {
        cout<<"Numero es divisible entre 5";
    }
    else
    {
        cout<<"Numero NO es divisible entre 5";
    }
}
