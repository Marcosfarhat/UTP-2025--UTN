#include <iostream>
using namespace std;
int main(){
    int i, num;
    cout<<"ingrese un numero y te digo los divisores "<< endl;
    cin>>num;
    // si es par
    for (i=1;i<=num;i++){
//        cout<< "i="<< i<<endl;
        if (num%i==0){
            cout<< i<<endl;
        }
    }
    return 0;
}
