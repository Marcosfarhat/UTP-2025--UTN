#include <iostream>

using namespace std;

int main()
{
    int horas, paga;
    cout << "Ingrese la cantidad de horas trabajadas : " << endl;
    cin>> horas;
    cout<< "Ingrese el valor de la hora : "<< endl;
    cin >>paga;
    cout << "Los honorarios son : "<< paga * horas<< endl;
    return 0;
}

