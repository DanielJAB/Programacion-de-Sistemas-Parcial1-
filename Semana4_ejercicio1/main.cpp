#include <iostream>

using namespace std;
int numero, count=0, mayor=0;
char resp;
int main()
{
    do{
     do{
       cout << "Ingrese un numero mayor a 50: ";
        cin>> numero;
        if (numero>mayor and numero>100)
        mayor=numero;
       }while(!((count<10) and (numero>50) and (numero%2!=0)));
       count++;
    }while (count<10);

    cout<<"El numero mayor es el: "<<mayor;


}




