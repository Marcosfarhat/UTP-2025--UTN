#include <iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<< " Ingrese cuantos alfajores A vendio : ";
    cin >> a;
    cout<< " Ingrese cuantos alfajores B vendio : ";
    cin >> b;
    cout<< " Ingrese cuantos alfajores C vendio : ";
    cin >> c;

    cout<< "Usted vendio un " << 100*a/(a+b+c)<<" por ciento de alfajores A "<< endl;
    cout<< "Usted vendio un " << 100*b/(a+b+c)<<" por ciento de alfajores B "<< endl;
    cout<< "Usted vendio un " << 100*c/(a+b+c)<<" por ciento de alfajores C "<< endl;


    return 0;
}
