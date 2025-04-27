#include <iostream>
using namespace std;

int main() {
//Declaro Variables
        int a,promo=0,apro=0;
//Primer examen
        cout<< "Ingrese la nota del primer examen" << endl;
        cin>>a ;
        if (a>=4){
            if(a>=7){
            promo++;
            }
             else{
            apro++;
        }
        }
//Segundo Examen
           cout<< "Ingrese la nota del primer examen" << endl;
        cin>>a ;
        if (a>=4){
            if(a>=7){
            promo++;
            }
             else{
            apro++;
        }
        }
//Tercer Examen
           cout<< "Ingrese la nota del primer examen" << endl;
        cin>>a ;
        if (a>=4){
            if(a>=7){
            promo++;
            }
             else{
            apro++;
        }
        }
//Cuarto Examen
           cout<< "Ingrese la nota del primer examen" << endl;
        cin>>a ;
        if (a>=4){
            if(a>=7){
            promo++;
            }
             else{
            apro++;
        }
        }

    //Resultado final
    //promociona
        if (promo==4){
            cout<< " Promocionaste"<<endl;
        }
    //Rinde Final
        else if (promo + apro >=3){
                cout<< "Rinde Final "<<endl;
            }
    //Recupera
        else if (promo + apro >=1){
                cout<< "Recupera  "<<endl;
            }
    //Recursa
            else if (promo + apro==0){
                cout<< "Recursa "<<endl;
            }

        cout<<endl<< "valor promo"<<endl <<promo <<endl << "Valor Aprobo "<<endl<< apro << endl;
  return 0;
}

