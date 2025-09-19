#include <iostream>
using namespace std;
int main(){
    int num_1, num_2, num_3;
    cout << " Ingrese un numero "<< endl;
    cin >> num_1;
    cout << " Ingrese otro numero "<< endl;
    cin >> num_2;
    cout << " Ingrese otro mas numero "<< endl;
    cin >> num_3;
    if (num_1== num_2 && num_2== num_3){
        cout << " Los numero son iguales "<< endl;

    }
    else{
        cout<< " Los numeros no son iguales"<< endl;
    }

    return 0;
}
