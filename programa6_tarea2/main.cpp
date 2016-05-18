#include <iostream>
#include <time.h> //maneja tiempo, hora, fecha, etc... se usa en el srand...
#include <stdlib.h> //para el system.pause
#include <stdio.h> //cuando trabajamos con numeros random

using namespace std;
char resp;
int turno, horas,i,sumahoras,total,pxh;


int main()
{

}
do
{
     do
{
    cout <<"Ingresar turno 1, 2 o 3: ";
    cin>>turno;
}   while ((turno!=1) and (turno !=2) and (turno !=3));

    sumahoras=0;
    for(i=1;i<=5;i++)
    {
        cout<<"Horas del dia del dia: "<<i<<": ";
        cin>>horas;
        sumahoras+=horas;
    }
    switch (turno)
    {
    case 1:
        pxh=100;
        break;
    case 2:
        pxh=150;
        break;
    default :
        pxh=200;
        break;
    }
    total = sumahoras*pxh;
    cout<<"Pago total de horas es: "<<total<<"\n";

    do
    {
        cout<<"Desea continuar? ";
        cin>>resp;
    }   while ((resp!='S') and (respuesta!='N'));
}   while (resp!='N');


    return 0;
}
