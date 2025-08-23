#include <iostream>
using namespace std;
int main(){
         float asientos, ocupados;
         float pr_ocup, pr_libre;

    // Ingreso datos
     cout<< "Asientos: "<< endl;
     cin >> asientos;
     cout << "Acoupados: "<< endl;
     cin >> ocupados;
      // Porcentajes

     pr_ocup = ocupados*100/asientos;
     cout<< "Asientos coupados: " << pr_ocup<<endl;

     pr_libre = 100- pr_ocup;
     cout << "Asientos libres : "<< pr_libre<< endl;

    return 0;
}
