#include <iostream>
using namespace std;
int main(){
    int i, num, cont=0,num_max;
    for (i=1;i<=10;i++){
        cout<<i<< " ingrese un numero :"<< endl;
        cin>> num;
        if (i==1){
            num_max=num;
            cont=i;
        }
        if (num>num_max && i!=1){
            num_max=num;
            cont=i;
        }

    }
    cout<< " el numero maximo es "<< num_max<< endl;
    cout<<" Y la posicion es :"<< cont<< endl;
    return 0;
}
