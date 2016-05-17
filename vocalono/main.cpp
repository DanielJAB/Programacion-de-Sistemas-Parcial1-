#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
char v;

int main()
{
    cout<<"Introduzca una letra: ";
    cin>>v;
    switch (v)
    {
    case 'a':
        cout<<"Es una vocal";
        break;
    case 'e':
        cout<<"Es una vocal";
        break;
    case 'i':
        cout<<"Es una vocal";
        break;
    case 'o':
        cout<<"Es una vocal";
        break;
    case 'u':
        cout<<"Es una vocal";
        break;
    default:
        cout<<"Es una consonante o un numero";
        break;
    }
    cout<<"\n";
    system("PAUSE");
}
