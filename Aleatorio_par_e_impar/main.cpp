#include <iostream> //presentar los numeros del 1-10
#include <time.h> //maneja tiempo, hora, fecha, etc... se usa en el srand...
#include <stdlib.h> //para el system.pause
#include <stdio.h> //cuando trabajamos con numeros random

using namespace std;
int contador;
int numero;
int main()

{   srand (time(0));
    contador = 0;

    while (contador<10)
   {
    numero = 1 + rand() % (100-1);

    if (numero % 2 == 0)
    {
        cout<<"El numero es par  :  ";
    }
    else
    {
        cout<<"El numero es impar:  ";
    }
        contador++;
        cout<<contador<<") Numero "<<numero<<"\n";
   }

    cout<<"********** Final del programa **********";
}
