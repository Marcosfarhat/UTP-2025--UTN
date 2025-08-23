#include <iostream>
using namespace std;
int main() {
    int a,b;

    cout << " Compra: "<< endl;
    cin >> a;
    cout << "Descuento : "<< endl;
    cin >> b;

    cout << "Importe : "<< a << endl;
    b= b*a/100;
    cout << "Descuento :"<< b<< endl;
    a=a-b;
    cout << "Valor final : " << a << endl;


return 0;
}
