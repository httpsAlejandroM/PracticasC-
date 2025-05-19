#include <iostream>
using namespace std;

int main()
{

    int sueldoBase = 5000;
    int premio = 700;
    int autosVendidos;
    float sueldoTotal;

    // Se pide la cantidad de autos vendidos
    cout << "Ingrese la cantidad de autos vendidos por el vendedor: ";
    cin >> autosVendidos;

    // Se calcula el sueldo total
    sueldoTotal = sueldoBase + (autosVendidos * premio);

    // Se muestra en pantallo el sueldo total
    cout << "El sueldo total del vendedor es de: " << sueldoTotal << endl;

    return 0;
}

