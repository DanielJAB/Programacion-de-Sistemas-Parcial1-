#include <iostream>

using namespace std;

void presentar(int final)
{
    int k, i;
    for (i=1; i<=final; i++)
    {
        for (k=1;k<=i;k++)
        {
            cout<<k;
        }
        cout<<"\n";
    }
}
int main()
{
    int num;
    cout<<"ingresar el numero...: ";
    cin>>num;
    presentar(num);
}
