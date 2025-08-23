#include <iostream>
using namespace std;
int main(){
     int a,b,c,d;

     cout<< "A ="<< endl;
     cin >> a;
     cout<< "B ="<< endl;
     cin >> b;
     cout<< " C ="<< endl;
     cin >> c;
     // Porcentajes
     d=a+b+c;
     a=a*100/d;
     b=b*100/d;
     c=c*100/d;

     // alfajores por centaje
     cout << "A vendio el "<<a <<" por ciento"<< endl;

     cout <<"B vendio el "<<b <<" por ciento"<< endl;

     cout <<"C vendio el "<<c <<" por ciento"<< endl;

    return 0;
}
