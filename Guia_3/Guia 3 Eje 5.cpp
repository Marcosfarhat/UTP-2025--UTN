#include <iostream>
using namespace std;
int main(){
    int a,b,i;
    cout<<"Numero 1: \n";
    cin>>a;
    cout<<"Numero 2: \n";
    cin>>b;

    if (a<b){
        for ( i=a;i<=b;i++){
            cout<<i<<endl;
        }
    }
    else {
            for (i=b;i<=a;i++){
            cout<<i<<endl;
            }
        }

    return 0;
}
