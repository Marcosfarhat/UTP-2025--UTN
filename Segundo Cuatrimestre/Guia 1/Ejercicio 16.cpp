#include <iostream>
using namespace std;
int main(){
    int pildoras_por_frasco = 75, betamol =45, micilina = 2, acido_sinitico = 7, cant_de_frascos, pildoras_a_fabricar;
        cout<< "Ingrese la cantidad de frascos que necesita fabricar "<< endl;
    cin>> cant_de_frascos;
    pildoras_a_fabricar = cant_de_frascos*75;
    cout << " Usted necesitara "<< betamol*pildoras_a_fabricar<< " gramos de betamol, "<< micilina*pildoras_a_fabricar<< " gramos de micilina, "<< acido_sinitico*pildoras_a_fabricar<<" gramos de acido sinitico. " <<endl;
    return 0;
}
