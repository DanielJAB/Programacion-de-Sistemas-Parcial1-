#include <iostream>

using namespace std;
/* ingresar la nota acumulada y examen del alumno y presentar la nota final
*/
int nota,exam,final;

int main()
{
    cout <<"Ingresar la nota acumulada:";
    cin>>nota;

    cout <<"Ingresar nota de examen:";
    cin>>exam;

    final = nota+exam;
    cout<<"La nota final es:" <<final<<"\n";
    if (final>=60)
    {

            cout<<"Aprobado";
    }

    else

    {

            cout<<"Reprobado";
}
}

