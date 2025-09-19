#include <iostream>
using namespace std;
int main(){
    int dias, horas;
    cout << " Ingrese la cantidad de horas y te digo cuantos dias y horas son "<< endl;
    cin >> horas;
    dias = horas/24;
    horas = horas - (dias *24);
    cout << " La cantidad de horas ingresadas equivalen a " << dias << " dias " << horas << " horas"<< endl;
    return 0;
}
