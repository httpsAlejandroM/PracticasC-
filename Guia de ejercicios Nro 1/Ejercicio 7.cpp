#include <iostream>
using namespace std;

int main() {

    int importeProducto, porcentaje, total, descuento;

    cout << "Ingrese el importe del producto: ";
    cin >> importeProducto;

    cout << "Ingrese el porcentaje de descuento del producto: ";
    cin >> porcentaje;

    descuento = (importeProducto * porcentaje) / 100;
    total = importeProducto - descuento;

    cout << "El importe a pagar es $" << total;

    return 0;
}

