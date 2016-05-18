#include <iostream>
#include <time.h> //maneja tiempo, hora, fecha, etc... se usa en el srand...
#include <stdlib.h> //para el system.pause
#include <stdio.h> //cuando trabajamos con numeros random

using namespace std;

int main()
{   srand(time(0));
    int numero,i;

    for (i=1;i<=10;i++)
    {   numero =1 + rand() % (100-1);
        do
        {
            numero =1 + rand() % (100-1);
        }
        while (numero % 2 !=0);  // !=distinto de 0
        cout<<i<<"- Numero generado: "<<numero<<"\n";

    }
}
