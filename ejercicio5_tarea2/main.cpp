#include <iostream> //tabla de multiplicacion

using namespace std;
int tabla;
int resp, i;

int main()
{
    cout <<"Ingresar la tabla...:";
    cin>>tabla;

    for(i=1;i<=10;i++)
    {
        resp=tabla*i;
        cout<<tabla<<" X "<<i<<" = "<<resp<<"\n";
    }
}
