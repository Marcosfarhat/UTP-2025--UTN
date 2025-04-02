#include <iostream>
using namespace std;
int main(){
  // declaro variable
  int a,b,c, consumo;
  // Ingreso de Kw gastados
  cout<< " Ingrese cuantos Kw consumio: "<< endl;
  cin>> a;
  // Decicion
  if (a<=100){
    consumo = a*10;
    cout<< "El consumo es de : "<< endl<< consumo << endl;
  }
  else {
    if (a>100 && a<=200){
 // Excedente de 100KW
        b=a-100;
        b=b*12;
  // Primeros 100 KW
        a=100;
        a=a*10;
        consumo=a+b;
       cout<< "El consumo es de : "<< endl<<consumo<< endl;
    }
    else{
  // Excedente de 125 KW
         b=100;
         b=b*12;
  //Excedente de 200 KW
        c=a-200;
        c=c*15;
  // Primeros 100 KW
        a=100;
        a=a*10;
        consumo=a+b+c;

        cout<< "El consumo es de : "<< endl<< consumo<< endl;
    }
  }
  system("pause");
    return 0;
}
