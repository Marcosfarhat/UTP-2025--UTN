#include <iostream>
using namespace std;
int main(){
    float semana_1,semana_2,semana_3,semana_4, promedio;
    cout<< " Ingrese la recaudacion de la semana 1 "<< endl;
    cin >> semana_1;
    cout<< " Ingrese la recaudacion de la semana 2 "<< endl;
    cin >> semana_2;
    cout<< " Ingrese la recaudacion de la semana 3 "<< endl;
    cin >> semana_3;
    cout<< " Ingrese la recaudacion de la semana 4 "<< endl;
    cin >> semana_4;

    cout<<" El promedio de lo recaudado es " << (semana_1+semana_2+semana_3+semana_4)/4<< endl;
    cout<< " El porcentaje de recaudacion por semana es :"<< endl;
    cout<< "Semana 1 "<< 100*semana_1/(semana_1+semana_2+semana_3+semana_4)<<"%"<< endl;
    cout<< "Semana 2 "<< 100*semana_2/(semana_1+semana_2+semana_3+semana_4)<<"%"<< endl;
    cout<< "Semana 3 "<< 100*semana_3/(semana_1+semana_2+semana_3+semana_4)<< "%"<<endl;
    cout<< "Semana 4 "<< 100*semana_4/(semana_1+semana_2+semana_3+semana_4)<< "%"<<endl;
    return 0;
}
