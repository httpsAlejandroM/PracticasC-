#include <iostream>
using namespace std;

int main() {

    float horas;
    int minutos, resto;

    cout << "Ingrese minutos: ";
    cin >> minutos;

    resto = minutos % 60;
    horas = (minutos - resto) / 60;

    cout << "Los minutos ingresados equivalen a " << horas << " horas " << resto << " minutos.";


    return 0;
}

