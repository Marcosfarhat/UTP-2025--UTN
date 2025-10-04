#include <iostream>
using namespace std;
int main(){
    int i, num, contador=0;
    cout<< "Ingrese un numero entero y te digo la cantidad de divisores que tendra"<< endl;
    cin>> num;

    for (i=1;i<=num;i++){
        if (num%i==0){
            contador++;
        }
    }
    cout<< "La cantidad de divisores son "<< contador<< endl;
    return 0;
}
