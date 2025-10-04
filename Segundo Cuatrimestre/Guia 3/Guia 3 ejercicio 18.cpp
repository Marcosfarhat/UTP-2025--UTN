#include <iostream>
using namespace std;
int main(){
   int i,num;
   cout<<"Ingresar un numero y si es par te digo todos los divisores"<< endl;
   cin>> num;

   for (i=1;i<=num;i++){
    if (num%2==0){
        if (num%i==0 && i!=1){
            cout<< i<<endl;
        }
    }
   }
    return 0;
}
