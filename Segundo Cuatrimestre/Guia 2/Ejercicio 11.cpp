#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3, num4, num5;
    int con_pos =0 ,con_neg =0,cont_0=0;
    cout<< " Ingrese un numero "<< endl;
    cin >> num1;
    cout<< " Ingrese otro numero "<< endl;
    cin >> num2;
    cout<< " Ingrese un tercer numero "<< endl;
    cin >> num3;
    cout<< " Ingrese el cuarto numero "<< endl;
    cin >> num4;
    cout<< " Ingrese un quinto numero "<< endl;
    cin >> num5;
    // num1
    if (num1>=0){
        if (num1>0){
            con_pos ++;
        }else{
            cont_0 ++;
        }
    }else{
        con_neg ++;
        }
    // num2
    if (num2>=0){
        if (num2>0){
            con_pos ++;
        }else{
            cont_0 ++;
        }
    }else{
        con_neg ++;
        }
    // num3
    if (num3>=0){
        if (num3>0){
            con_pos ++;
        }else{
            cont_0 ++;
        }
    }else{
        con_neg ++;
        }
        // num4
    if (num4>=0){
        if (num4>0){
            con_pos ++;
        }else{
            cont_0 ++;
        }
    }else{
        con_neg ++;
        }
        // num5
    if (num5>=0){
        if (num5>0){
            con_pos ++;
        }else{
            cont_0 ++;
        }
    }else{
        con_neg ++;
        }

    //final
    cout<<" Los numeros positivos son : "<< con_pos<<endl;
    cout<<" Los numeros negativos son : "<< con_neg<<endl;
    cout<<" Los numeros ceros son : "<< cont_0<<endl;




    return 0;
}
