#include <iostream>
using namespace std;

int main()
{

    int num1, num2, num3, numMedio, maxNum, minNum;

    cout << "Ingrese el primer n£mero: ";
    cin >> num1;

    cout << "Ingrese el segundo n£mero: ";
    cin >> num2;

    cout << "Ingrese el tercer n£mero: ";
    cin >> num3;

    if ((num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2))
    {
        numMedio = num1;
    }
    else if ((num2 > num1 && num2 < num3) || (num2 > num3 && num2 < num1))
    {
        numMedio = num2;
    }
    else
    {
        numMedio = num3;
    }

    cout << "El n£mero del medio es : " << numMedio << endl;

    return 0;
}

