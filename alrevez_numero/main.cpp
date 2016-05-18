#include <iostream> //presentar los numeros del 1-10
#include <time.h> //maneja tiempo, hora, fecha, etc... se usa en el srand...
#include <stdlib.h> //para el system.pause
#include <stdio.h> //cuando trabajamos con numeros random
using namespace std;

int numero,digito;
int main()
{
    cout <<"Ingrese el numero:  ";
    cin>>numero;

    while (numero >0)
        {
        digito = numero % 10;
            cout<<digito;
        numero = numero/10;
        }

    cout<<"\n";
    cout<<"********** Final del programa **********";
}
