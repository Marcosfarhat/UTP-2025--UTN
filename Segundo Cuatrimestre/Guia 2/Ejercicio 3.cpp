#include <iostream>
using namespace std;
int main(){
     // Un numero es par cuando si lo divido por dos el resto es CERO
     int par_impar;
     cout<< " Ingrese un numero "<< endl;
     cin >> par_impar;
     if (par_impar%2 == 0){
        cout <<" El numero es par";
     }
     else{
        cout << " Es impar"<< endl;
     }
    return 0;
}
