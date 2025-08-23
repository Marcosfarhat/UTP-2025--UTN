#include <iostream>
using namespace std;
int main(){
    int a,b;
     cout<< "Ingrese los minutos :"<< endl;
     cin>> a;
     b=a/60 ;
     a= a-b*60;

     cout<< " Serian "<< b<<"horas y " <<a<< " Minutos"<< endl;

return 0;
}
