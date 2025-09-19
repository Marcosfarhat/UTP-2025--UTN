#include <iostream>
using namespace std;
int main(){
    int num1=0,num2=0,num3=0;
    bool num11=true, num22=true, num33=true;
    cout<< " Ingrese un numero "<< endl;
    cin >> num1;
    cout<< " Ingrese otro numero "<< endl;
    cin >> num2;
    cout<< " Ingrese un tercer numero "<< endl;
    cin >> num3;

    if (num1>num2){
        num22=false;
    }
    else{
        num11=false;
    }
    if (num2>num3){
        num33=false;
    }
    else{
        num22=false;
    }
    if (num1>num3){
            num33=false;
            }
    else{
        num11=false;
    }
    /// Impresion de resultado
    if (num11==true){
        cout<< " El numero "<< num1<< " el maximo "<< endl;
    }
    if (num22==true){
        cout<< " El numero "<< num2<< " el maximo "<< endl;
    }
    if (num33==true){
        cout<< " El numero "<< num3<< " el maximo "<< endl;
    }

    cout<< num11<<endl;
    cout<< num22<<endl;
    cout<< num33<<endl;



    return 0;
}
