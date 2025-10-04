#include <iostream>
using namespace std;
int main(){
    int i,contador=0, numero;

    cout<< "Ingrese un numero y le digo si es primo o no "<< endl;
    cin>> numero;
    for (i=1;i<=numero;i++){
        if (numero%i==0){
            contador++;
        }                                                                     2
    }
    if (contador==2){
        cout<<" El numero "<< numero<<" es primo"<< endl;
    }
    else{
        cout<< "El numero "<< numero<< " no es primo "<< endl;
    }
    return 0;
}
