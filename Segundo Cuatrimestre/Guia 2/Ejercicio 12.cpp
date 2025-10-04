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

    // busca el del medio
    if (num1>num2){
            if(num2>num3){
               cout<< "Valor del medio es :"<< num2;
               }
               else{
                    if (num1>num3){
                        cout<<" Valor del medio "<< num3;
                    }

               }
               cout<<" Valor del medio "<< num1;
    }
    if (num1>num3){
        cout<< "EL valor del medio es "<< num1;
    }else{
        if (num2>num3){
            cout<<"El valor del medio es "<< num3;
        }else{
            cout<<"El valor del medio es "<< num2;
             }
    }




    return 0;
}
