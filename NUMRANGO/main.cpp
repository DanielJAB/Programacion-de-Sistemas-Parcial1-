#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{    srand(time(0));
    int num;
    num=rand () % (200);
    cout<<"\n""Valor de numero generado es: " <<num<<"\n";

    if (num<=60)
    {
        cout<<"El Numero esta en el rango de 60.";
    }

    else if((num>=61) and (num<=90))
       {
            cout<<"El Numero esta en el rango entre 61-90.";
       }

    else if((num>=91) and (num<=160))
       {
            cout<<"El Numero esta en el rango entre 91-160.";
       }

    else if((num>=161) and (num<=200))
       {
            cout<<"El Numero esta en el rango entre 161-200.";
       }
    cout<<"\n";
    system("PAUSE");

}
