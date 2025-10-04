#include <iostream>
using namespace std;
int main(){
    int num,i,max_pares,cont;
    for (i=1;i<=10;i++){
         cout<<" ingrese un numero :"<<endl;
         cin>>num;
        if (num%2==0){
            if (cont==0){
                max_pares=num;
            }
            else{
                if (num>max_pares){
                    max_pares=num;
                }

            }

        }


    }
    cout<< " El numero par maximo es "<<max_pares<< endl;
    return 0;
}
