#include <iostream>
using namespace std;

int main() {

    int n, numero, contador = 0;

    cout << "Indique cantidad de n£meros: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
       cout << "Ingrese un numero: ";
       cin >> numero;

       if(numero > 0){
          contador++;
       }
    }

    cout << "Cantidad de positivos: " << contador << endl;

    return 0;
}

