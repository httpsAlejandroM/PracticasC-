#include <iostream>
using namespace std;

int main() {

    int num1, num2, diferencia;

    cout << "Ingrese un n£mero: ";
    cin >> num1;

    cout << "Ingrese otro n£mero: ";
    cin >> num2;

   diferencia = (num1 - num2);

   if (diferencia <= 0 ) {
     diferencia = diferencia * -1;
   };

   cout << "La diferencia entre numeros es: " << diferencia << endl;

    return 0;
}

