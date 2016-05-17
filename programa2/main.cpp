#include <iostream>

using namespace std;
int horas,pagohoras;
float pagot;
/*ingresar las horas , el pago por hora, luego calcular el pagot... alt+92
*/
int main()
{
    cout << "Ingresar las horas";
    cin>> horas;

    cout<< "Ingresar pago por hora";
    cin>>pagohoras;

    pagot = horas * pagohoras;
    cout<< "Pago total ...>"<<pagot<<"\n";
}
