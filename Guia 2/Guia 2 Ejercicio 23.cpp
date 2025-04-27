#include <iostream>
using namespace std;
int main(){
// Declaro variables
    int mes, bimestre;
// Ingreso datos
cout<< "Ingrese el numero de mes: "<< endl;
cin >> mes;

// Proceso dato si no es 1 o 2
if (mes %2 == 0 && mes !=2 ){
    bimestre = mes/2;

    cout<<endl<< "El mes par "<< mes << " pertenece al Bimestre "<< bimestre<< endl  ;
}
else if ((mes+1)%2 == 0 && mes !=1 ){
       bimestre = mes/2+1;

    cout<< "El mes  "<< mes << " pertenece al Bimestre  "<< bimestre<< endl  ;
}
else {
    cout<< "El mes "<< mes << " pertenece al Bimestre 1 "<<  endl  ;
}

    return 0;
}
