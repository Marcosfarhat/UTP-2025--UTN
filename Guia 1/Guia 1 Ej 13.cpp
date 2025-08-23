 #include <iostream>
using namespace std;
int main(){
    int a,b,c,d;

    cout << " Ingrese el importe : "<< endl;
    cin >> a;
    b=a/1000;
    c= (a - (b *1000)) /500;
    d= (a - ((b *1000)+(c*500)))/200;
    a = (a - (((b *1000)+(c*500))+d*200))/100;

    cout << b<< " Billetes de 1000, "<<endl;
    cout << c<< " Billetes de 500 "<<endl;
    cout<< d<< " Billetes de 200 " <<endl;
    cout << a<< " Billetes de 100 " << endl;


return 0;
}
