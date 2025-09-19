#include <iostream>
using namespace std;
int main(){
    int minutos, horas, dias;
    cout << "Ingrese la cantidad de minutos y le devuelvo la cantidad de dias, horas y minutos que equivaldrian " << endl ;
    cin >> minutos;

    horas = minutos/60;
    minutos =  minutos - horas*60;
    dias = horas/24;
    horas= horas - dias*24;
    ///horas = dias%24;
    //minutos = minutos - (dias*24) - horas);
    cout<< " Los minutos ingresados equivalen a  "<< dias << " dias " << horas << " horas " << minutos<< " minutos "<< endl;
    return 0;
}
