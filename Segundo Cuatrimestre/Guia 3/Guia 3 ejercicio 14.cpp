#include <iostream>
using namespace std;
int main(){
    int num,i,contador=1,impar_1,impar_2,impar_3,impar_4;
    bool cont_1=false,cont_2=false, cont_3=false,cont_4=false,cont_5=false,cont_6=false;
    for (i=1;i<=7;i++){
        cout<< i<< "# Ingresa un numero :"<< endl;
        cin>>num;
        if (num%2 !=0){
            if (cont_1==false){
                impar_1=num;
                cout<<" impar 1 "<< impar_1<< endl;
                cout<<cont_1<<endl;
                cont_1=true;
            }
            if(cont_1==true && cont_2==false){
                impar_2=num;
                cont_2= true;
                cout<<" impar 2 "<< impar_2<< endl;
            }
            if(cont_2==true&& cont_3==false){
                impar_3=num;
                cont_3=true;
            }
            if(cont_3==true && cont_4==false){
                impar_4=num;
                impar_4=true;
            }
            if (impar_4==true){
                impar_3=impar_4;
                impar_4=num;

            }
            //
        }

    }
    if (cont_4 ==false) {
           impar_4=impar_3;
           impar_3=impar_2;
           cout<<"el primer impar es :"<< impar_1<< endl;
           cout<<"el segundo impar es :"<< impar_2<< endl;
           cout<<"el tercer impar es :"<< impar_3<< endl;
           cout<<"el cuarto  impar es :"<< impar_4<< endl;

        }
    if (cont_3 ==false) {
           impar_4=impar_2;
           impar_3=impar_1;
           cout<<"el primer impar es :"<< impar_1<< endl;
           cout<<"el segundo impar es :"<< impar_2<< endl;
           cout<<"el tercer impar es :"<< impar_3<< endl;
           cout<<"el cuarto  impar es :"<< impar_4<< endl;

        }

    return 0;
}
