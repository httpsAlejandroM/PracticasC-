#include <iostream>
using namespace std;

int main() {
    
    float numeroARedondear, decimal;
    int numeroRedondo;
    cout << "Ingrese un numero: " << endl;
    cin >> numeroARedondear;

    decimal = numeroARedondear - (int)numeroARedondear;

    if(decimal >= 0.50) {
        numeroRedondo = numeroARedondear + 1;
    } else {
        numeroRedondo = numeroARedondear;
    }

    cout << numeroRedondo << endl;  

 
    return 0;
}