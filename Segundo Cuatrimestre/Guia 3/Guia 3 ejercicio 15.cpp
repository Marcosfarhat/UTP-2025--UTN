#include <iostream>
using namespace std;
int main(){
    int i=0, num,numero_creciente;
    bool crece = false;
    for (i=1;i<=8;i++){
        cout<< i<<" Ingrese 8 numeros : " <<endl;
        cin>> num;
        if (i==1){
            numero_creciente=num;
        }
        if (i>1){

            if (num>numero_creciente){
                numero_creciente=num;
            }
            else{
                crece = true;
            }
        }
    }
    if (crece==true){
        cout<< " Los numeros ingresados no estan de forma creciente "<< endl;

    }
    else{
        cout<< "Los numeros estan de forma creciente"<< endl;
    }
    return 0;
}
