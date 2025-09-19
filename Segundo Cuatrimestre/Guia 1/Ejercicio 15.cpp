#include <iostream>
using namespace std;
int main(){
    int temp_max, temp_min, amp_term;
    cout << " Ingrese la temperatura maxima "<< endl;
    cin >> temp_max;
    cout<< "Ingrese la temperatura minima "<< endl ;
    cin >> temp_min;
    amp_term = temp_max- temp_min;
    cout << " La amplitud termica es de "<< amp_term<< " grados "<< endl;


    return 0;
}
