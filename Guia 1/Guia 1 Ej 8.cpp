#include <iostream>
using namespace std;
int main(){
    int  a;
    float b;

    cout << "Venta : "<< endl;
    cin >> a;
    cout << "venta con descuento " << endl;
    cin >> b;
    b = 100- b/100*a;

    cout << "Descuento : "<< b<< endl;


return 0;
}
