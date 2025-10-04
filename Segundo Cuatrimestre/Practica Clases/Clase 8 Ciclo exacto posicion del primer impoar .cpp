#include <iostream>
using namespace std;
int main(){
     int i,num,primer_impar, segundo_impar,pos_impar,pos_seg,contador;
     bool hayImpar = false, seg_impar =false;

     for (i=1; i<=5;i++){
        cout<< " Ingrese un numero #"<< (i)<< ": "<<endl;
        cin>> num;
            if (num%2!=0 && hayImpar==false){
                primer_impar=num;
                pos_impar=i;
                hayImpar=true;
                contador++;
                 }
                 else{
                    if (num%2!=0 && contador==1){
                        segundo_impar=num;
                        pos_seg=i;
                        seg_impar=true;
                        contador++;

                        }
                 }
             }
    cout<< "El primer impar es :"<< primer_impar<<endl;
    cout<< "Su posicion es :"<<pos_impar<< endl;
    cout<< "El segundo impar es :"<< segundo_impar<<endl;
    cout<< "Su posicion es :"<<pos_seg<< endl;
    return 0;
}
