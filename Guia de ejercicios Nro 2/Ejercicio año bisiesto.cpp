#include <iostream>
using namespace std;

int main()
{

    int anio;

    cout << "Ingresar a¤o: ";
    cin >>  anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){

          cout << "A¤o bisiesto" << endl;
    }  else {
         cout << "A¤o no bisiesto" << endl;
    }

    return 0;
}

