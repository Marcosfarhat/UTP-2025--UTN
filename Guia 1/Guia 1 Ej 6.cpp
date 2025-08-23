#include <iostream>
using namespace std;
int main(){
    float a,b,c,d, e;

    cout << "Recaudacion semana 1 "<< endl;
    cin >> a;


    cout << "Recaudacion semana 2 "<< endl;
    cin >> b;


    cout << "Recaudacion semana 2 "<< endl;
    cin >>c;


    cout << "Recaudacion semana 4 "<< endl;
    cin >> d;

    // recaudacion porcentaje por semana

    e= a+b+c+d;
    a=a*100/e;
    b=b*100/e ;
    c=c*100/e;
    d=d*100/e;

    cout<< "Recaudacion promedio semana 1 :"<< a<< endl;
    cout<< "Recaudacion promedio semana 2 :"<< b<< endl;
    cout<< "Recaudacion promedio semana 3 :"<< c<< endl;
    cout<< "Recaudacion promedio semana 4 :"<< d<< endl;

    //Promedio

    e=e/4;

    cout << "Promedio por semana  es :"<< e<< endl;

    return 0;
}
