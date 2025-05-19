#include <iostream>
using namespace std;

int main()
{

    float semana_1, semana_2, semana_3, semana_4,
          porcentaje_1, porcentaje_2, porcentaje_3, porcentaje_4,
          recaudacionPromedio, totalRecaudado;

    cout << "Ingrese la recaudacion de la primer semana: ";
    cin >> semana_1;

    cout << "Ingrese la recaudacion de la segunda semana: ";
    cin >> semana_2;

    cout << "Ingrese la recaudacion de la tercer semana: ";
    cin >> semana_3;

    cout << "Ingrese la recaudacion de la cuarta semana: ";
    cin >> semana_4;

    totalRecaudado = semana_1 + semana_2 + semana_3 + semana_4;
    recaudacionPromedio = totalRecaudado / 4;

    porcentaje_1 = semana_1 * 100 / totalRecaudado;
    porcentaje_2 = semana_2 * 100 / totalRecaudado;
    porcentaje_3 = semana_3 * 100 / totalRecaudado;
    porcentaje_4 = semana_4 * 100 / totalRecaudado;

    cout << "La recaudacion promedio fue de $" << recaudacionPromedio << endl;
    cout << "En la primer semana se recaudo el " << porcentaje_1 << "%" << endl;
    cout << "En la segunda semana se recaudo el " << porcentaje_2 << "%" << endl;
    cout << "En la tercer semana se recaudo el " << porcentaje_3 << "%" << endl;
    cout << "En la cuarta semana se recaudo el " << porcentaje_4 << "%" << endl;

    return 0;
}

