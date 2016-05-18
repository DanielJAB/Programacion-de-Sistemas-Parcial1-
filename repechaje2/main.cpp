#include <iostream> //ciclo anidado
#include <stdio.h>

using namespace std;
int num, cp=0, mayor=0, prom=0,menor=9999999999, totalSumaDePares = 0;
char resp;

int main()
{
    do{
    do
    {
        cout<<"Ingresar numero: ";
        cin>> num;
        //_flushall;
    }
    while(num%2!=0);
    if(num>mayor)
        {mayor=num;
        }
    if (num<menor)
        {menor=num;
        }


    do
{
        cout<<"Desea continuar? ";
        cin>>resp;
        resp=toupper(resp);
    }while ((resp!='S') and (resp!='N'));
    cp++;
    totalSumaDePares = totalSumaDePares + num;
    prom= totalSumaDePares/cp;
    }while (resp!='N');



cout<<"Mayor de los pares...>"<<mayor<<"\n";
cout<<"El promedio de los pares...>"<<prom<<"\n";
cout<<"El menor de los pares...>"<<menor<<"\n";
}


