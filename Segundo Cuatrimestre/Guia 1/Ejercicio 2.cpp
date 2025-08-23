#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<< " Ingrese el numero 1 : "<< endl;
    cin >> a;
    cout << " Ingrese el numero 2 : "<< endl;
    cin >>b;
    c=a;
    a=b;
    b=c;

    cout<< "Ahora el numero 1 es "<< a<< " y el numero 2 es "<< b<< endl;

    return 0;
}
