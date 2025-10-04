#include <iostream>
using namespace std;
int main(){
    int cont_impares=0, num, i, impar_1=0,impar_2=0,resto,pos_1=0,pos_2=0;

    for (i=1;i<=5;i++){
        cout<<"Ingrese un numero :"<< endl;
        cin>> num;
        resto= num%2;
        if (resto!=0){
            cont_impares++;
            if (cont_impares==1){
                impar_1=num;
                pos_1=i;
            }
            else{
                if (cont_impares==2){
                    impar_2=num;
                    pos_2=i;
                 }
            }
        }
    }
    cout<<"Impar 1 es el numero  " << impar_1<< " y esta en la posicion " << pos_1<<endl;
    cout<<"Impar 2 es el numero  " << impar_2<< " y esta en la posicion " << pos_2<<endl;


    return 0;
}
