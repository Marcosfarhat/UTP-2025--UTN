#include <iostream>
using namespace std;
int main(){
    int i, num, num_max1, num_max2;
    for (i=1;i<=5;i++){
        // ingreso los datos
        cout<< i<< " Ingrese 5 numeros "<< endl;
        cin>> num;
        //primera vuelta le doy valor max1
        if (i==1){
            num_max1=num;
            cout<<" i==1"<< endl;
        }
        //segunda vuelta doy valor a max2
        else if (i==2){
                if (num_max1>num){
                    num_max2=num;
                    cout<<" i==2"<< endl;
                }
                else{
                    num_max2=num_max1;
                    num_max1 =num;
                    cout<<" i==2"<< endl;
                }
        }
        // compruebo los siguientes numeros
        cout<<"numero maximo 2 "<< num_max2<<endl;
        //if (i>2 && num>num_max1 || num > num_max2){
        if (i>2 && (num>num_max1 || num > num_max2)){
            if (num>num_max1){
                num_max2=num_max1;
                num_max1=num;

                cout<<" i==3-1"<< endl;
            }
            else {
                num_max2=num;
                cout<<" i==3-2"<< endl;
            }
        }

    }
    cout<< " Numero maximo "<< num_max1<< endl;
    cout<< " Numero maximo siguiente "<< num_max2<< endl;

    return 0;
}
