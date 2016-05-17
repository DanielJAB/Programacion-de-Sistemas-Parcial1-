#include <iostream> //Ingresar un numero, el programa debera decir cuantas cifras tiene el numero
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int numero;

int main()
{
    cout<<"Ingresar un numero...";
    cin>>numero;

    if (numero<0)
        numero*= (-1); //este operador es: numero=numero*(-1)

    if (numero<=9)
        cout<<"Tiene una cifra";

        else if (numero <=99)
            cout <<"Tiene dos cifras";

            else if (numero<=999)
                cout<<"Tiene tres cifras";

                else
                    cout<<"Tiene mas de tres cifras";

    return 0;
}
