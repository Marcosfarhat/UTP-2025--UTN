#include <iostream>
using namespace std;
#include <typeinfo>
int main(){
   int num,cont=0,promedio=0;
   do{
       cout<< "Ingrese un numero"<<endl;
       cin>>num;
       if (num%2==0){
            promedio+=num;
            cont++;
            cout<< "Encontre un par"<< endl;
            cout<<"valor promedio "<< promedio<< endl;
       }
       /*if (cont == 3){
           promedio=float(promedio/cont);
           cout<<"Promedio antes de salir del while "<<promedio<<endl;



       }  */
   // cuando sea menor que tres sigue , llega a 3 corta
   }while(cont<3);
   promedio =((float)promedio/cont);
   cout<< typeid(promedio).name()<<endl;
   cout<< "El promedio es "<< promedio<<endl;
   cout<< "El promedio es "<< ((float)promedio/cont)<<endl;

    return 0;
}
