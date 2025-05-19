#include <iostream>
using namespace std;

int main() {

    float sinDescuento, conDescuento, porcentajeDescuento;

    cout << "Ingrese el imoporte de la venta sin descuento: ";
    cin >> sinDescuento;

    cout << "ingrese el importe de la venta con descuento: ";
    cin >> conDescuento;

    porcentajeDescuento =  ((sinDescuento - conDescuento) / sinDescuento) * 100;

    cout << "El descuento aplicado es del " << porcentajeDescuento << "%";

    return 0;
}

