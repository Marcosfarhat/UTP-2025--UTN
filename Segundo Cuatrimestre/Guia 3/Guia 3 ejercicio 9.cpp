#include <iostream>
using namespace std;
int main(){
    int num,i,num_max;
    for (i=1;i<=5;i++){
        cout<< i<< " Ingresa un numero "<<endl;
        cin>>num;
        if (i==1){
              num_max=num;
        }
        if (num>num_max && i!=1)  {
            num_max=num;
        }
    }
    cout<< " El numero maximo es "<< num_max<< endl;
    return 0;
}
