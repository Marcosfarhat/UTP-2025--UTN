#include <iostream>
using namespace std;
int main(){
    // Declaro variables
    int presupuesto, cara, cara_prod, cara_mant_cant;

    // Ingreso de datos

    cout<<" Ingrese el presupuesto: " << endl;
    cin>>presupuesto;
    cout<< "Ingrese cantidad de datos a producir el primer mes: " << endl;
    cin >> cara;

    // Calculo costos de caramelos

    cara_prod = 2.5*cara;
    // Valor de Mantenimiento
    if (cara>100){
    //valor de mantenimiento de los caramelos ingresados   si superan los 100
        cara_mant_cant = cara/100 + 1;
        cara_prod = cara_prod + (cara_mant_cant*5000)+10000;
    }
    else {
    // Valor de mantenimiento de los caramelos ingresados si no superan los 100
         cara_prod = cara_prod + 15000;
            }
    // si el presupuesto cubre el mantenimiento
    if (presupuesto>= cara_prod){

        cout << "El presupuesto es suficiente para cubrir los costos de: "<< cara_prod << endl;
    }
    else {
    // Si el presupuesto no alcanza los costos de mantenimiento
          presupuesto = presupuesto - cara_prod;
        cout<< "El presupuesto no es suficiente, necesita un credito de : "<< presupuesto<< endl;

    }
    return 0;
}
