#include <iostream>
using namespace std;
int main(){
    int num,i,pos=0,pos_con=0,neg=0,neg_con,cero=0,cero_con=0;
    float pos_porcentaje,neg_porcentaje,cero_porcentaje;
    for (i=1;i<=5;i++){
       cout<< "Ingresa un numero :"<< endl;
        cin>>num;
        if (num>=0){
            if (num>0){
                pos_con+=num;
                pos++;

            }
            else{
                neg_con +=num;
                cero++;
            }
        }
        else{
            neg++;
            neg_con +=num;

        }
    }
    pos_porcentaje = (pos*100)/5;

    neg_porcentaje= ((neg*100)/5);
    cero_porcentaje= (cero*100)/5;
    cout<< pos_porcentaje<<endl;
    cout<< " escribiste "<<pos_porcentaje<<" de numeros positivos"<<endl;
    cout<< " escribiste "<<neg_porcentaje<<" de numeros negativos"<<endl;
    cout<< " escribiste "<<cero_porcentaje<<" de numeros son ceros"<<endl;
    return 0;
}
