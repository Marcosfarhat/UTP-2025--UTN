#include <iostream>
using namespace std;
int main(){
 // Declaro variables
 char a;
 int horas,costo,lenguaje,urgente;
 bool urg;

  // Ingreso datos
 cout << "Ingrese el lenguaje del proyecto"<<endl;
  cout << endl;
 cout<< "A: C/C++"<< endl;
 cout<< "B: C# "<< endl;
 cout<< "C: Python"<< endl;
 cout<< "D: Go "<< endl;
 cout << endl;
 cin>> a;

 // Ingreso de horas
 cout << "Ingrese cantidad de horas solicitadas: "<< endl;
 cin >>horas;
 cout << endl;

 // Si es urgente
 cout << " Es urgente "<< endl;
 cout << " 0- NO ";
 cout << " 1- SI ";
 cin>>urg;
// Valor de Lenguaje
if (a=='A'){
      lenguaje = 7500;
}
else{
    if (a=='B'){
        lenguaje = 6100;
    }
    else {
    if (a=='C'){
        lenguaje = 5400;
    }
    else {
    if (a=='D'){
        lenguaje= 5000;
    }
}
}
}
//Chequeo si estamos bien
// cout << "Valor de Lenguaje: " << lenguaje << endl;

// Costo de Lenguaje y horas
costo = lenguaje * horas;

//Booleano Urgente  y costo final
if (urg==true){
  urgente = costo *2.2;
     cout<< "El valor de su trabajo es: "<< endl<< urgente<<endl;
}
else{
    cout<< "El valor de su trabajo es: "<< endl<< costo<<endl;
}

    return 0;
}
