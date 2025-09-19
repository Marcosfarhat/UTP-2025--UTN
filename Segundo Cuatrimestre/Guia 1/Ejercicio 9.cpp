#include <iostream>
using namespace std;
int main(){
    int minutos, horas;
    cout<< " Ingrese la cantidad de minutos y le devuelvo el dato en horas "<< endl;
    cin >> minutos;
    horas = minutos/60;
    minutos = minutos-(horas*60);
    cout<< " Los minutos ingresados equilvaldrian a " << horas<< " horas " << minutos<< " minutos";
    return 0;
}
