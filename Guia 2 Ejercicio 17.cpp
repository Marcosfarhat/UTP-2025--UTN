#include <iostream>
using namespace std;
int main(){
    //Declaro variables
     int a,b,c,d;
     // Ingreso datos
     cout << "Ingrese el primer numero"<< endl;
     cin >> a;

     cout << "Ingrese el segundo numero"<< endl;
     cin >> b;

     cout << "Ingrese el tercero numero"<< endl;
     cin >> c;

     cout << "Ingrese el cuarto numero"<< endl;
     cin >> d;
     // Decicion
     if (a<b && b<c && c<d){
        cout << "Conjunto Ordenado" << endl;
     }
     else {
        cout << "Conjunto Desordenado" << endl;
     }

     system("pause");
    return 0;
}
