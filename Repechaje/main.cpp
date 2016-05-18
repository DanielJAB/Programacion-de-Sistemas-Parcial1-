#include <iostream> //ciclo anidado
#include <stdio.h>

using namespace std;
int num, cp=0, mayor=0, prom=0,menor=9999999999, totalSumaDePares = 0;
char resp;

int main()
{
    do
    {
        cout<<"Ingresar numero: ";
        cin>> num;
        //_flushall;
    if (num%2==0)
       {

        cp++;
        if(num>mayor)
            {mayor=num;
            }
        if (num<menor)
            {menor=num;
            }
        totalSumaDePares = totalSumaDePares + num;
        prom= totalSumaDePares/cp;
       }
        do
    {
        cout<<"Desea continuar? ";
        cin>>resp;
        resp=toupper(resp);
}   while ((resp!='S') and (resp!='N'));
}   while (resp!='N');
cout<<"Mayor de los pares...>"<<mayor<<"\n";
cout<<"El promedio de los pares...>"<<prom<<"\n";
cout<<"El menor de los pares...>"<<menor<<"\n";

}
