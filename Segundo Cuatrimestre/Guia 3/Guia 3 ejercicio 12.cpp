#include <iostream>
using namespace std;
int main(){
    int i,num,max_positivo=0,minimo_negativo=0;
    bool primer_positivo=false, primer_negativo =false;
    for (i=1;i<=10;i++){
        cout<<i<<"-Ingresa 10 numeros y te digo el maximo positivo y el minimo negativo "<<endl;
        cin>>num;
        if (num>0 && primer_positivo==false){
            primer_positivo=true;
            max_positivo=num;
        }
        if (num<0 && primer_negativo==false){
            primer_negativo=true;
            minimo_negativo=num;
        }
        if (num>max_positivo && primer_positivo==true ){
            max_positivo=num;

        }
        if(num<primer_negativo && primer_negativo==true ){
            minimo_negativo=num;
        }

    }
    cout<< "EL maximo positivo es "<< max_positivo<< endl;
    if (minimo_negativo==0){
          cout<< "EL minimo negatico no ha aparecido " << endl;
    }
    else{
         cout<< "EL minimo negatico es "<< minimo_negativo<< endl;
    }
    return 0;
}
