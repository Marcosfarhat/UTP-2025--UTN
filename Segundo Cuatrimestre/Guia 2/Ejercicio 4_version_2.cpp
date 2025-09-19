#include <iostream>
using namespace std;
int main(){
    int num_1, num_2, diferencia;
    cout <<" Ingrese un numero "<< endl;
    cin >> num_1;
    cout << " Ingrese un segundo numero y te digo la diferencia absoluta con el primero "<< endl;
    cin >> num_2;
    diferencia = num_1-num_2;
    if (diferencia <0){
            diferencia = diferencia*-1;
            cout<<" El valor absoluto es " << diferencia<< endl;
    }
    else{
            cout<< "El valor absoluto es "<< diferencia<< endl;
    }

    return 0;
}
