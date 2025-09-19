#include <iostream>
using namespace std;
int main(){
   int importe, descuento;
   cout << " Ingrese el importe de la compre :$"<< endl;
   cin >> importe;
   cout<< " Ingrese el porcentaje de descuento a aplicar "<<endl;
   cin >> descuento;
   cout<< "El importe es $"<< importe<< " , Descuento: "<< descuento*importe/100<< ", Total " << importe-(descuento*importe/100)<<endl;


    return 0;
}
