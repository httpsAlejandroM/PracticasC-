#include <iostream>
using namespace std;

int main()
{

    int minutosIngresados, dias, horas, minutos;

    cout << "Ingrese cantidad de minutos: ";
    cin >>  minutosIngresados;

    dias = minutosIngresados / 1440;
    horas = (minutosIngresados % 1440) / 60;
    minutos =  (minutosIngresados % 1440) % 60;

        cout << "Los minutos ingresados equivalen a " << dias << " dias " << horas << " hs " << "y " << minutos << " minutos";

    return 0;
}

