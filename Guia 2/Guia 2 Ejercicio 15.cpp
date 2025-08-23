#include <iostream>
using namespace std;
int main(){
   int anio=0;
   cout<< "Entre un año para saber si es bisiesto ";
   cin >> anio;
   if (anio%4 == 0){
        if (anio%100==0){
                if (anio%400==0){
               cout<< "Es bisiesto";
                    }
                    else{
                          cout<< "no es bisiesto ";
                    }
                }
                else {
                        cout<< "no es bisiesto ";
                }
       }
    else{
           cout<< "no es bisiesto ";
    }
    return 0;
}
