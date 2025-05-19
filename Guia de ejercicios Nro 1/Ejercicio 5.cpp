#include <iostream>
using namespace std;

int main() {

    float stock = 200;
    int alfajorA, alfajorB, alfajorC;
    float porcentajeA, porcentajeB, porcentajeC;

    // Se pide cantidad de alfajores vendidos de cada marca
    cout << "Ingrese cantidad de alfajores vendidos de la marca A: ";
    cin >> alfajorA;

    cout << "Ingrese cantidad de alfajores vendidos de la marca B: ";
    cin >> alfajorB;

    cout << "Ingrese cantidad de alfajores vendidos de la marca C: ";
    cin >> alfajorC;

    // Se calcula porcentaje de ventas de cada alfajor

    porcentajeA = (alfajorA * 100) / stock;
    porcentajeB = (alfajorB * 100) / stock;
    porcentajeC = (alfajorC * 100) / stock;

    cout << "Se vendieron" << endl;
    cout << porcentajeA << "% de los alfajores A" << endl;
    cout << porcentajeB << "% de los alfajores B" << endl;
    cout << porcentajeC << "% de los alfajores C" << endl;


    return 0;
}

