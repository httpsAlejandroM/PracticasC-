#include <iostream>
using namespace std;

int main() {

    int horasTrabajadas;
    float pagoPorHora, sueldo;

    // Pedir cantidad de horas trabajadas
    cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> horasTrabajadas;

    // Pedir pago por hora
    cout << "Ingrese el pago por hora: ";
    cin >> pagoPorHora;

    // Calcular sueldo
    sueldo = pagoPorHora * horasTrabajadas;

    cout << "El sueldo es: " << sueldo << endl;

    return 0;
}

