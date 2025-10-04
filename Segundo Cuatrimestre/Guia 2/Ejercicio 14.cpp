#include <iostream>
using namespace std;
int main(){
     int dia, mes, anio,dia_actual, mes_actual, anio_actual, edad;

     cout<< "Ingrese el anio de nacimiento : ";
     cin>> anio;
     cout<< "Ingrese el mes de nacimiento : ";
     cin>> mes;
     cout<< "Ingrese el dia de nacimiento : ";
     cin>> dia;
     //actual
     cout<< "Ingrese el anio actual : ";
     cin>> anio_actual;
     cout<< "Ingrese el mes actual : ";
     cin>> mes_actual;
     cout<< "Ingrese el dia actual : ";
     cin>> dia_actual;

     edad = anio_actual-anio;

     if ( mes<=mes_actual){
              if (mes< mes_actual){
                cout<<" La edad es 1:"<< edad -1<< endl;
              }else{
                 if (dia>dia_actual){
                   cout<<" La edad es 2:"<< edad -1<< endl;
                   cout<<"Dia < que Dia_actual"<< endl;
                 } else{
                    cout<<" La edad es 3 : "<< edad;
                    }
              }
     }else{
        cout<<" La edad es 4: "<< edad;
        }


    return 0;
}
