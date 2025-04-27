#include <iostream>
using namespace std;
int main(){
 // Declaro variables edad y acumuladores
 int a_e, cont_30_18=0, cont_alt_17_18=0, cont_20_30_40=0;
 // Declaro variables altura y acumulador para  promedio de altura
 float a_l, prom_alt_30=0, cont_prom_alt_mas_30=0;
 // Ingreso de datos 1 Usuario
 cout<< endl;
cout << "Usuario 1 "<< endl;
cout << "Ingrese la edad: "<<endl;
cin >> a_e;
cout<< "Ingrese la altura: "<< endl;
cin >> a_l;

// Deciciones para obtener los datos para ingresarlos en los acumuladores
if (a_e>30 && a_l >1.8){
    cont_30_18 ++;
}
if (a_e>30){
    prom_alt_30 = prom_alt_30 + a_e;
    }
if (a_e >=1.7 && a_l <=1.8)  {
    cont_alt_17_18 ++;
}
if (a_e == 20 || a_e == 30 || a_e == 40 ){
    cont_20_30_40 ++;
}

 // Ingreso de datos 2 Usuario
cout<< endl;
cout << "Usuario 2 "<< endl;
cout << "Ingrese la edad: "<<endl;
cin >> a_e;
cout<< "Ingrese la altura: "<< endl;
cin >> a_l;
// Deciciones para obtener los datos para ingresarlos en los acumuladores
if (a_e>30 && a_l >1.8){
    cont_30_18 ++;
}
if (a_e>30){
    prom_alt_30 = prom_alt_30 + a_e;
    cont_prom_alt_mas_30 ++;
    }
if (a_e >=1.7 && a_l <=1.8)  {
    cont_alt_17_18 ++;
}
if (a_e == 20 || a_e == 30 || a_e == 40 ){
    cont_20_30_40 ++;
}

// Ingreso de datos 3 Usuario
cout<< endl;
cout << "Usuario 3 "<< endl;
cout << "Ingrese la edad: "<<endl;
cin >> a_e;
cout<< "Ingrese la altura: "<< endl;
cin >> a_l;
if (a_e>30 && a_l >1.8){
    cont_30_18 ++;
}
if (a_e>30){
    prom_alt_30 = prom_alt_30 + a_e;
     cont_prom_alt_mas_30 ++;
    }
if (a_e >=1.7 && a_l <=1.8)  {
    cont_alt_17_18 ++;
}
if (a_e == 20 || a_e == 30 || a_e == 40 ){
    cont_20_30_40 ++;
}
// Ingreso de datos 4 Usuario
cout<< endl;
cout << "Usuario 4 "<< endl;
cout << "Ingrese la edad: "<<endl;
cin >> a_e;
cout<< "Ingrese la altura: "<< endl;
cin >> a_l;
// Deciciones para obtener los datos para ingresarlos en los acumuladores
if (a_e>30 && a_l >1.8){
    cont_30_18 ++;
}
if (a_e>30){
    prom_alt_30 = prom_alt_30 + a_e;
     cont_prom_alt_mas_30 ++;
    }
if (a_e >=1.7 && a_l <=1.8)  {
    cont_alt_17_18 ++;
}
if (a_e == 20 || a_e == 30 || a_e == 40 ){
    cont_20_30_40 ++;
}

// Ingreso de datos 5 Usuario
cout<< endl;
cout << "Usuario 5 "<< endl;
cout << "Ingrese la edad: "<<endl;
cin >> a_e;
cout<< "Ingrese la altura: "<< endl;
cin >> a_l;
// Deciciones para obtener los datos para ingresarlos en los acumuladores
if (a_e>30 && a_l >1.8){
    cont_30_18 ++;
}
if (a_e>30){
    prom_alt_30 = prom_alt_30 + a_e;
     cont_prom_alt_mas_30 ++;
    }
if (a_e >=1.7 && a_l <=1.8)  {
    cont_alt_17_18 ++;
}
if (a_e == 20 || a_e == 30 || a_e == 40 ){
    cont_20_30_40 ++;
}
     cout << "Mayores de 30 anios y altura superior a 1.8: "<< cont_30_18<< endl;
     cout << "Promedio de altura de mayores de 30: "<< prom_alt_30/cont_prom_alt_mas_30 << endl;
     cout << "Cantidad de Personsas cuya altura esta entre 1.7 y 1.8 metros: " << cont_alt_17_18<< endl;
     cout << "Cantidad de Personsas cuyas edades son 20, 30 y 40: " <<cont_20_30_40<< endl;
    return 0;
}
