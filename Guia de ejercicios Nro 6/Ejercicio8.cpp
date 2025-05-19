#include <iostream>
using namespace std;

int numeroPerfecto(int n);

int main()
{

    int numero, cantidadPerfectos = 0;

    do
    {
        cout << "Ingrese un numero: " << endl;
        cin >> numero;

        cantidadPerfectos = cantidadPerfectos + numeroPerfecto(numero);

    } while (numero != 0);

    cout << "Cantidad de numeros perfectos: " << cantidadPerfectos << endl;

    return 0;
}

int numeroPerfecto(int n)
{
    if (n != 0 && n % 10 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}