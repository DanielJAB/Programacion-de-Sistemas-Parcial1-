#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int count = 0;
    int divNumbers = 0;
    while (count<10){

        cout << "Ingrese el numero desado" ;
        cin >> number;
        if(number%5==0){
            divNumbers++;
            cout << "Entro";
        }
        count++;
    }

    cout << divNumbers;
}
