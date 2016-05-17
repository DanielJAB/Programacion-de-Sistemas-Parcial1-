#include <iostream> //presentar los numeros del 1-10
#include <time.h> //maneja tiempo, hora, fecha, etc... se usa en el srand...
#include <stdlib.h> //para el system.pause
#include <stdio.h> //cuando trabajamos con numeros random

using namespace std;
int contador, suma, mayor,menor;
int numero, con50, suma50, prome50;
int main()


{   srand(time(0));
    contador = 0;
    suma = 0;
    mayor = 0;
    menor = 100;

    while (contador<10)
    {   numero = 1 + rand() % (100-1);
    suma = suma + numero;
    //suma=+numero;
    if (mayor < numero)
    {
        mayor = numero;
    }

    if (menor > numero)
    {
        menor = numero;
    }
    if (numero>50)
    {
         con50++;
         suma50+= numero;
    }

        contador++;  // contador = contador +1
        cout<<contador<<" Numero "<<numero<<"\n";
    }
    prome50 = suma50/con50;

    cout<<"\n";
    cout<<"La suma de los numeros es: "<<suma<<"\n";
    cout<<"El numero mayor es: "<<mayor<<"\n";
    cout<<"El numero menor es: "<<menor<<"\n";
    cout<<"Numeros mayores a 50: "<<con50<<"\n";
    cout<<"El promedio de los mayores a 50 es: "<<prome50<<"\n";
    cout<<"\n";
    cout<<"********** Final del programa **********";
    cout<<"\n";
}
