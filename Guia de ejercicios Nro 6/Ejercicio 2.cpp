#include <iostream>
using namespace std;

int calcularMaximo (int n1, int n2) {
        if (n1 > n2){
            return n1;
        } else {
            return n2;
        }

        return n1;
}

int main() {

    int n1, n2, numeroMaximo;

    cout << "Ingrese un numero: ";
    cin >> n1;


    cout << "Ingrese otro numero: ";
    cin >> n2;

    numeroMaximo = calcularMaximo(n1, n2);

    cout << "El numero maximo es : " << numeroMaximo << endl;

    return 0;
}

