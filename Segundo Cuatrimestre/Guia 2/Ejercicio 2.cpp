#include <iostream>
using namespace std;
int main(){
    /* UN numero es multiplo de otro si el primero dividido el segundo da como RESTO cero
       1=12,2=3
       12/3 = 4
       resto = 0
       12 es multiplo de 3
       */
       int primero, segundo;
       cout<< " Ingrese un numero para saber si es multiplo del que ingresara luego "<< endl;
       cin >> primero;
       cout<< " Ingrese el segundo sobre el cual chequearemos si el primero es multiplo "<< endl;
       cin >> segundo;
       if (primero%segundo == 0){
        cout<<" Es multiplo";
       }
       else{
        cout<<" No es multiplo";
       }
    return 0;
}
