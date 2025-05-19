#include <iostream>
using namespace std;

void esPar (int number) {

       if(number % 2 == 0){
        cout << "Es par";
       } else {
        cout << "Es impar";
       }
    }



int main() {

    int numero;

    cout << "Ingrese un n£mero: ";
    cin >> numero;


    esPar(numero);

    return 0;
}

