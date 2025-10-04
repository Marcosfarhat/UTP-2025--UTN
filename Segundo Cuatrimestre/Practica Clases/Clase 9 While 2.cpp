#include <iostream>
using namespace std;
int main(){
    int i=0, num;
    cout<< "Ingrese un numero ";
        cin>>num;
    while (num!=0){
        cout<< "Ingrese un numero ";
        cin>>num;
        cout<<"Intento "<< i<<endl;
        i++;
        cout<<endl;
    }
    cout<< "Se termino"<<endl;
    return 0;
}
