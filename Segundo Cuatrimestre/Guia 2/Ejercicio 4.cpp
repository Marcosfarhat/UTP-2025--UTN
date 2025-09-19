#include <iostream>
using namespace std;
int main(){
    int num_1, num_2, diferencia;
    cout <<" Ingrese un numero "<< endl;
    cin >> num_1;
    cout << " Ingrese un segundo numero y te digo la diferencia absoluta con el primero "<< endl;
    cin >> num_2;


    if (num_1 > num_2 ){
        diferencia = num_1- num_2;
         cout << " La diferencia absoluta es "<< diferencia<< endl;
    }
    else{
         diferencia = num_2- num_1;
        cout << " La diferencia absoluta es "<< diferencia<< endl;
    }


    return 0;
}
