#include <iostream>
using namespace std;
int main(){
     int num,i=0,pos=0,neg=0,cero=0;
     for (i=1;i<=10;i++){
        cout<< "Ingresa un numero :"<< endl;
        cin>>num;
        if (num>=0){
            if (num>0){
                pos++;
            }
            else{
                cero++;
            }
        }
        else{
            neg++;

        }
     }
    cout<< " escribiste "<<pos<<" positivos"<<endl;
    cout<< " escribiste "<<neg<<" negativos"<<endl;
    cout<< " escribiste "<<cero<<" son ceros"<<endl;

    return 0;
}
