#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout << " Ingrese la longitud del primer lado del triangulo "<< endl;
    cin >> num1;
    cout << " Ingrese la longitud del segundo lado del triangulo "<< endl;
    cin >> num2;
    cout << " Ingrese la longitud del tercer lado del triangulo "<< endl;
    cin >> num3;
    if (num1 == num2 || num2 == num3 || num1 == num3){

        if (num1 == num2 && num2 == num3 && num1 == num3){
        cout<< " El triangulo es equilatero " << endl;
        }
        else{
            cout << " Es escaleno "<< endl;
        }
    }
    else{
        cout<< " El triangulo es isoceles"<< endl;
    }
    return 0;
}
