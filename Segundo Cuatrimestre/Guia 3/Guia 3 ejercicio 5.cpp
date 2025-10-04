#include <iostream>
using namespace std;
int main(){
    int num1, num2,i,num3;
    cout<< "Ingrese un numero "<<endl;
    cin>>num1;
    cout<< "Ingrese otro numero "<<endl;
    cin>>num2;
    if (num1<num2){
        i=num1+1;
        for (i>num1;i<num2;i++){
        cout<<i<< endl;
        //cout<<"hola1";
        }
    }
    else{
        i=num2+1;
        for (i>num2;i<num1;i++){
        cout<<i<< endl;
        //cout<<"hola2";

        }
    }
    return 0;
}
