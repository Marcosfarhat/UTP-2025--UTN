#include <iostream>
using namespace std;
int main(){
    int multiplo;
    cout<<"Ingresa un numero y te digo si es bisiesto "<<endl;
    cin >>multiplo;
    if ( multiplo%4 ==0){
            if (multiplo%100 ==0 && multiplo%400 !=0){
                cout<<" No es bisiesto"<< endl;
            }
            else{
                cout<<" es bisiesto "<< endl;
             }

    }else{
        cout<<" No es bisiesto "<< endl;
        }

    return 0;
}
