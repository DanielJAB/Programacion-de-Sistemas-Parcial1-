#include <iostream>

using namespace std;
int num, suma=0, prom, c=0;
char resp;
int main()
{
    do{
    do
    {
    cout <<"Ingresar un numero div entre 5 mayor a 100...>";
    cin>>num;
    }
    while (!(( num %5 ==0) and (num>100)));

    suma+= num;

    do
        {
        cout<<"Desea continuar? ";
        cin>>resp;
        resp=toupper(resp);
}   while ((resp!='S') and (resp!='N'));
    c++;
   }while (resp!='N');
    prom= suma/c;
    cout<<"El promedio es...>"<<prom<<"\n";
}
