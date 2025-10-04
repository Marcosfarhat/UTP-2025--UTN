#include <iostream>
using namespace std;
int main(){
    int i,n,pos=0;
    for (i=1;i<=5;i++){
        cout<<" Ingrese un numero y te digo cuantos son positivos"<< endl;
        cin>> n;
        if  (n>0){
            pos ++;
        }
    }
    cout<<"Cantidad de numeros positivos: "<< pos<< endl;
    return 0;
}
