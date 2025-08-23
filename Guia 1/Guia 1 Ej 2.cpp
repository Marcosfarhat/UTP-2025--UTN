#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<" Ingrese 1 numero y se lo asignamos a  ";
    cin>> a;
    cout<< " ingrese otro numero y se lo asignamos a " ;
    cin>> b;
    c=b;
    b=a;
    a=c;
    cout<<" a = "<<a<<endl<< "b =  "<<b<< endl;




    return 0;
}
