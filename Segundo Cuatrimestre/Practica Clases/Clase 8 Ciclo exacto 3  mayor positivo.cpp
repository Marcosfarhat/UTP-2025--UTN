#include <iostream>
using namespace std;
int main(){
    int max,num,i;
    // booleano para la primera vuelta iniciarlo
    bool primero=true;

    for (i=1;i<5;i++){
        cout<< "Numero"<< endl;
        cin>> num;
        // version  1
        if (primero==true){
            max=num;
            primero=false;
        }
         if (max<num){
            max=num;
        }
        //version 2
        /*if (i=1){
            max= num;
        }
        else{
           if (max<num){
             max=num;
        } */
    }
    cout<<"El numero maximo es: "<< max<<endl;
    return 0;
}
