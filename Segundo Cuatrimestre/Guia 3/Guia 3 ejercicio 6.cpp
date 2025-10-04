#include <iostream>
using namespace std;
int main(){
    int n,cantidad,numero_ingresado,cont=0,i;

    cout<< "Ingresa la cantidad de numeros que queres ingresar "<<endl;
    cin>> n;

    for (i=1;i<=n;i++){
        cout<<"Ingresa un numero y te digo cuantos son positivos "<< endl;
        cin>> numero_ingresado;
        if (numero_ingresado%2==0){
            cont++;
        }
    }
    cout<<"La cantidad de numeros positivos son : " << cont<< endl;
    return 0;
}
