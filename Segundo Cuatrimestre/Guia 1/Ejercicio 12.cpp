#include <iostream>
using namespace std;
int main(){
    int importe,caja, huevos, huevos_sueltos;
    cout << " Ingrese la cantidad de huevos vendidos "<< endl;
    cin >> huevos;
    caja = huevos/12;
    huevos_sueltos= huevos%12;
    importe = caja*1000 +huevos_sueltos*120;
    cout << "El importe total es $" << importe<< endl;
    return 0;
}
