#include <iostream>
using namespace std;
int main(){
    int num1 =0, num2=0, resultado=0;
    /* cout << num1<<endl<<num2<<endl<<resultado;
    */
    cout<< "Ingrese la cantidad de horas trabajadas ";
    cin >>num1;
    cout<< "Ingrese el valor de la hora trabajada ";
    cin >> num2;

    resultado = num1*num2;
    cout<< " El sueldo correspondiente es :$ "<< resultado;
    cout<< endl;

    return 0;
}
