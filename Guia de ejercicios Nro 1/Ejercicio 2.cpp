#include <iostream>
using namespace std;

int main()
{

    int firstNumber, secondNumber, aux;

    // Se pide el primer n£mero
    cout << "Ingrese un primer n£mero: ";
    cin >> firstNumber;

    // Se pide el segundo n£mero
    cout << "Ingrese un segundo n£mero: ";
    cin >> secondNumber;

    // Se intercambian valores
    aux = firstNumber;
    firstNumber = secondNumber;
    secondNumber = aux;


    // Se muestra en pantalla los resultados cambiados
    cout << "El primer n£mero ingresado fue: " << firstNumber << endl << "El segundo n£mero ingresado fue: " << secondNumber << endl;

    return 0;
}

