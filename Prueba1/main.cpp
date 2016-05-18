#include <iostream> //ingresar un numero al programa.. luego sumar cada una de las cifras y presentar promedio

using namespace std;
int numero, c=0;
int cifra, suma=0;
float promedio;

int main()
{
    cout<< "Ingresar un numero";
    cin>>numero;

    while (numero>0)
    {
        cifra = numero % 10;
        numero = numero /10;5
        suma+=cifra;
        c++
    }
    promedio = float(suma)/float(c);
    cout<<"Suma de los digitos es: " <<suma<<"\n";
    cout<<"Promedio de los digitos: "<<promedio<<"\n";
}
