#include <iostream>
using namespace std;
int main(){
     float cantidad_de_asientos, asientos_ocupados;
     cout<< "Ingrese la cantidad de asientos que tiene el avion "<< endl;
     cin >> cantidad_de_asientos;
     cout<< " Ingrese la cantidad de asientos ocupados "<< endl;
     cin >> asientos_ocupados;

     asientos_ocupados = 100* asientos_ocupados/cantidad_de_asientos;
     cout << " El porcentaje ocupado es "<< asientos_ocupados<< endl;
     cout << "EL porcentaje de asientos libres es "<< 100 - asientos_ocupados  << endl;


    return 0;
}
