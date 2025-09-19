#include <iostream>
using namespace std;
int main(){
   int num1, num2, num3;
   cout<< " Ingrese el 1 numero "<< endl;
   cin >> num1;
   cout<< " Ingrese el 2 numero "<< endl;
   cin >> num2;
   cout<< " Ingrese el 3 numero "<< endl;
   cin >> num3;
   if (num1!= num2 && num2!= num3&& num1!=num3){
        cout<< " Los tres numeros son diferentes "<< endl;

   }

    return 0;
}
