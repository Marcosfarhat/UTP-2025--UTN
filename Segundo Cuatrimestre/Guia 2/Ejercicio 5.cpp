#include <iostream>
using namespace std;
int main(){
    int importe;
    cout << " Ingrese el importe "<< endl;
    cin >> importe;
    if (importe<100){
        importe = importe - (importe*5/100);

    }
    else{
        if(importe>=100 && importe<=500){
            importe= importe- (importe*10/100) ;
        }
        else{
            importe= importe- (importe*15/100);

        }
    }
    cout<< " EL importe es "<< importe << endl;

    return 0;
}
