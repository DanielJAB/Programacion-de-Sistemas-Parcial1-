#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int numero, digito, suma, promedio,;
int main()
{
    suma=0;
      promedio=0;
        a=0;
    cout << "Ingrese el numero: ";
    cin>>numero;

    while(numero>0)
    {
        digito=numero%10;
        numero=numero/10;
        suma=suma+digito;
        a=a+1;
    }
    cout << "SUMA DE DIGITOS>>>>"<<suuma;
    promedio=suuma/a;
      cout << "PROMEDIO>>>>"<<promedio;
}

