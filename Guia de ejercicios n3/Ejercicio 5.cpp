#include <iostream>
using namespace std;

int main() {

    int menor, mayor, aux;
    cout << "Ingrese un numero: ";
    cin >> menor;


    cout << "Ingrese otro numero: ";
    cin >> mayor;

    if(menor > mayor){
       aux = mayor;
       mayor = menor;
       menor = aux;
    }

    for(int i = menor + 1; i <= mayor - 1; i++){
        cout << i << endl;
    }


    return 0;
}

