#include <iostream>
using namespace std;
int main(){
     int numero;
     cout <<" Ingrese un numero y le decimos si es positivo, negativo o cero"<< endl;
     cin >> numero;
     if (numero >0){
        cout<< " El numero es positivo"<< endl;
     }
     else{
        if (numero == 0){
            cout<< "El numero es cero";
        }
         else{
                cout<< " El numero es negativo"<< endl;
            }
        }


    return 0;
}
