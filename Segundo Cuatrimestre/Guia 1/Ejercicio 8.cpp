#include <iostream>
using namespace std;
int main(){
    // guardamos el porcentaje en una variable

    float importe, importe_con_descuento, porcentaje;
    cout << " Ingrese el importe de la venta "<< endl;
    cin >> importe;
    cout << " Ingrese el importe de la venta con descuento "<< endl;
    cin >> importe_con_descuento;
    porcentaje = 100*(importe - importe_con_descuento)/importe;
    cout << " El descuento es de "<< porcentaje << "%";

    return 0;
}
