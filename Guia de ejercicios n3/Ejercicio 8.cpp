#include <iostream>
using namespace std;

int main() {

    int numero, cantPositivos = 0, cantNegativos = 0 , cantCeros = 0;
    float porcPositivos, porcNegativos, porcCeros;

    for(int i = 1; i <= 10; i++){
        cout << "Ingrese un n£mero: ";
        cin >> numero;

        if (numero > 0 ){
                       cantPositivos++;
        } else if (numero < 0) {
            cantNegativos++;
        } else {
        cantCeros++;
        }
    }

    porcPositivos = (cantPositivos * 100) / 10;
    porcNegativos = (cantNegativos * 100) / 10;
    porcCeros = (cantCeros * 100) / 10;

    cout << "El porcentaje de positivos es %" << porcPositivos << endl;
    cout << "El porcentaje de negativos es %" << porcNegativos << endl;
    cout << "El porcentaje de ceros es %" << porcCeros << endl;



    return 0;
}

