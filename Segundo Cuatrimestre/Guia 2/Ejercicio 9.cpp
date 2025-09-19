#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<< " Ingrese un numero "<< endl;
    cin >> num1;
    cout<< " Ingrese otro numero "<< endl;
    cin >> num2;
    cout<< " Ingrese un tercer numero "<< endl;
    cin >> num3;
    if (num1>num2){
        if (num1>num3){
            cout<<"El numero maximo es "<< num1<< endl;
        }
        else{
            cout<< " El numero maximo es "<< num3<< endl;
        }
     }
    else{
        if (num2>num3){
            cout<< " EL numero mayor es "<< num2<< endl;
        }
        else {
            cout<< " El numero mayor es "<< num3<< endl;
        }
    }


    return 0;
}
