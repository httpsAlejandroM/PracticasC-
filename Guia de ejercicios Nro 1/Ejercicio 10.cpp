#include <iostream>
using namespace std;

int main() {

        int horasIngresadas, dias, horas;

        cout << "Ingrese cantidad de horas: ";
        cin >>  horasIngresadas;

        horas = horasIngresadas % 24;
        dias = horasIngresadas / 24;

        cout << "Las horas ingresadas equivalen a " << dias << " dias " << horas << " horas";

    return 0;
}

