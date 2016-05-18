#include <iostream> //ingresar un numero al programa.. luego contar cuantos pares e impares tiene

using namespace std;
int numero, ci=0, cp=0;
int cifra, mayor=0;


int main()
{
    cout<< "Ingresar un numero: ";
    cin>>numero;

    while (numero>0)
    {
        cifra = numero % 10;
        numero = numero /10;
        if (cifra % 2==0)
            cp++;
        else
            ci++;
        if (cifra>mayor)
        mayor = cifra;
    }
    cout<<"Mayor: " <<mayor<<"\n";
    cout<<"Par: "<<cp<<"\n";
    cout<<"Impar: "<<ci<<"\n";
}
