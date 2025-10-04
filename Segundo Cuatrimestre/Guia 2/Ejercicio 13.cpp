#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3;

    cout<<"Ingrese el 1 numero :";
    cin>>num1;
    cout<<"Ingrese el 2 numero :";
    cin>>num2;
    cout<<"Ingrese el 3 numero :";
    cin>>num3;
    if (num1>num2){
            if(num2>num3){
               cout<< num1<<","<<  num2<<","<< num3;

               }
               else{
                    if (num1>num3){
                        cout<<num1<<","<< num3<<","<<num2;
                    }
               }
               cout<<num3<<","<<  num1<<","<< num2;
    }

    if (num1>num3){
        cout<< num2<<","<<  num1<<","<< num3;
    }else{
        if (num2>num3){
            cout<<num2<<","<<  num3<<","<< num1;

        }else{
            cout<<num3<<","<<  num2<<","<< num1;
             }
    }


    return 0;
}
