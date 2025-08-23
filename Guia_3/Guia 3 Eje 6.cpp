#include <iostream>
using namespace std;
int main(){
    int i,cant_num, num,contador=0;
    cout<< "Ingrese la cantidad de numeros: \n";
    cin>>cant_num;
    for (i=cant_num;i>=1;i--){
        cout<< "Ingrese la cantidad de numeros: \n";
          cin>>num;
         if (num>1){
                contador++;
            }
       }
    cout<<"Cantidad de numeros positivos: \n"<<contador;

    return 0;
}
