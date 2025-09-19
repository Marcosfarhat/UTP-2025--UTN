#include <iostream>
using namespace std;
int main(){
   float importe, descuento;
   cout <<"Ingrese el importe de la venta :" << endl;
   cin >> importe;
   cout<< "Ingrese el descuento :";
   cin >> descuento;

   cout<< " El total a pagar es "<< importe - ((100*descuento)/importe)<< endl;

    return 0;
}
