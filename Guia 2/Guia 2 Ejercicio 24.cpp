#include <iostream>
using namespace std;
int main(){
// Declaro variables
    int mes, trimestre;
// Ingreso datos
cout<< "Ingrese el numero de mes: "<< endl;
cin >> mes;

// Proceso dato si no es 1 o 2
if (mes %3 == 0  ){          //&& mes !=2
    trimestre = mes/3;

    cout<<endl<< "El mes par "<< mes << " pertenece al trimestre "<< trimestre<< endl  ;
}
else if ((mes+1)%3 == 0 ){ //   && mes !=1
       trimestre = (mes+1)/3;

    cout<< "El mes  "<< mes << " pertenece al trimestre  "<< trimestre<< endl  ;
}
else if ((mes+2)%3 == 0 ){ //   && mes !=1
       trimestre = (mes+2)/3;
    cout<< "El mes "<< mes << " pertenece al trimestre  "<< trimestre <<  endl  ;
}

    return 0;
}
