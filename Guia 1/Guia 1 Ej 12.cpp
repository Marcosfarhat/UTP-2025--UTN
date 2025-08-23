#include <iostream>
using namespace std;
int main(){

    int a,b,c;
    cout << " Ingrese cantidad de huevos a comprar : "<< endl;
    cin >> a;

    b=a%12;
    a=a/12;
    a= a*1000+b*120;

    cout << " Total a abonar :"<< a<< endl;

return 0;

}
