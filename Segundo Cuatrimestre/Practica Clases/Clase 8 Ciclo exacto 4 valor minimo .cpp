#include <iostream>
using namespace std;

int main(){
    int num,i,cont_par=0,cont_neg=0,max,min,cont_max=0,cont_min=0;
    bool hayNegativos;

    for (i=1;i<=5;i++){
        cout<< "Numero"<< endl;
        cin>> num;
        //Cantidad de numeros pares
        if (num%2==0){
                cont_par++;
        }
        // Suma numeros negativos
        if (num<0){
            cont_neg +=num;
            hayNegativos = true;
        }


        // max y min
        // primera vuelta
        if (i==1|| num<min){
             min=num;
             cont_min=i;
        }
        //segunda vuelta  con max y min
         else{
                if(num<min){
                    min=num;
                    cont_min=i;
                }

            }
         }
      cout<< "Cantidad de numeros pares :"<< cont_par<< endl;
      if (hayNegativos==true){
      cout<< "Suma de numeros negaticos :"<< cont_neg<< endl;
      }
      else{
        cout<<"No hay negativos"<<endl;
      }
      cout << "Menor valor de la lista :"<< min<< endl;
      cout << "Ubicacion :"<< cont_min<< endl;


    return 0;
}
