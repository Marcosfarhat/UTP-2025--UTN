#include <iostream>
using namespace std;
int main(){

    int i,numero_mayor, numero_menor,num,cont=0;

     for (i=1;i<=5;i++){
        cout<< i<<" Ingrese 10 numeros y le digo cual es el mayor y el menor"<<endl;
        cin>>num;

        if (cont==0){
            numero_mayor=num;

            cont++;
        }
        if (cont==1){
                if(numero_mayor>num){
                    numero_menor=num;
                    cont++;
                }
                else{
                    numero_menor=numero_mayor;
                    numero_mayor=num;
                    cont++;

                }
        }
        if (cont>1 && num>numero_mayor){
                numero_mayor=num;
                cout<<"contador 2"<<endl;
            }
        else{
            if (num<numero_menor){
                numero_menor=num;
            }
        }
    }
    cout<<"El numero mayor es :" << numero_mayor<< endl;
    cout<<"El numero menores :" << numero_menor<< endl;

    return 0;
}
