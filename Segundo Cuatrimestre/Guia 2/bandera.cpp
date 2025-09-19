#include <iostream>
using namespace std;
int main(){
    /// hay positivos o no
    int num1,num2;
    bool hayPositivos = false;

    cout<< " Entrar un numero "<< endl;
    cin>> num1;
    cout<< " Entrar otro numero "<< endl;
    cin>> num2;

    if (num1>0 || num2>0){
        hayPositivos = true;
    }

    if (hayPositivos == true){
        cout<<" Hay positivos "<< endl;
    }
    else{
        cout<< " No hay positivos "<< endl;
    }

    return 0;
}
