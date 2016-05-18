#include <iostream>
#include <time.h> //maneja tiempo, hora, fecha, etc... se usa en el srand...
#include <stdlib.h> //para el system.pause
#include <stdio.h> //cuando trabajamos con numeros random

using namespace std;

int main()
{   srand(time(0));  //con esto nos ayuda a que no muestre el mismo numero siempre...
    int numero;

    numero = 50 + rand() % (100-50);
    // % mod
    // rango inicial + numero generado
    cout <<"Valor del numero "<<numero<<"\n";

    system ("PAUSE");
}
