#include <iostream>
using namespace std;
int main(){
   int mil, quinientos, doscientos, cien, importe,resto;
   cout << "Ingrese el importe a retirar, por favor "<< endl;
   cin >> importe;

   mil = importe/1000;
   resto = importe%1000;
   quinientos = resto/500;
   resto = resto%500;
   doscientos =resto/200;
   resto = resto%200;
   cien = resto/100;
   cout<< "Se entregara " << mil <<" Billetes de $1000, "<< quinientos<< " Billetes de $500, " << doscientos<< " Billetes de $200, "<< cien << " Billetes de $100" << endl;

    return 0;
}
