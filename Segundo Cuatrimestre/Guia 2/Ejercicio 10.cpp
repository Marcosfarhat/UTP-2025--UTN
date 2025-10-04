#include <iostream>
using namespace std;
int main(){
   int num1, num2, num3, num4, num5, num_max,num_min;
    cout<< " Ingrese un numero "<< endl;
    cin >> num1;
    cout<< " Ingrese otro numero "<< endl;
    cin >> num2;
    cout<< " Ingrese un tercer numero "<< endl;
    cin >> num3;
    cout<< " Ingrese el cuarto numero "<< endl;
    cin >> num4;
    cout<< " Ingrese un quinto numero "<< endl;
    cin >> num5;

    // Comparo numero maximo y minimo

    // num1 vs num

    if (num1>num2){
        num_min = num2;
        num_max = num1;
    }
    else{
        num_min= num1;
        num_max = num1;
    }
    // num_max y num_min vs num3
    if (num_max >num3){
        if (num_min>num3){
            num_min = num3;
        }
    }
    // num_max y num_min vs num4
       if (num_max >num4){
            if (num_min>num4){
                num_min = num4;
        }
    }

    cout<< "El numero maximo es "<< num_max<< endl;
    cout<< "El numero minimo es "<< num_min<< endl;



    return 0;
}
