#include <iostream>
using namespace std;

int main()
{

    float asientosTotales, asientosOcupados, porcentajeOcupado, porcentajeLibre;

    // Se pide la cantidad de asientos totales
    cout << "Ingrese la cantidad de asientos totales: ";
    cin >> asientosTotales;

    // Se pide la cantidad de asientos ocupados
    cout << "Ingrese la cantidad de asientos ocupados: ";
    cin >> asientosOcupados;

    // Se calcula el porcentaje de asientos ocupados y libres

    porcentajeOcupado = (asientosOcupados / asientosTotales) * 100;
    porcentajeLibre = 100 - porcentajeOcupado;

    cout << "El porcentaje de asientos ocupados es del " << porcentajeOcupado << "%" << endl
         << "El porcentaje de asientos libres es del " << porcentajeLibre << "%" << endl;


    return 0;
}

