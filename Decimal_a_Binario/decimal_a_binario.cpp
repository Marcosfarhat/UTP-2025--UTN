
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
// Version 1
// int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,m=0,n=0,l=0,o=0,p=0,q=0,x=0;
bool a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,m=0,n=0,l=0,o=0,p=0,q=0;

int x;

for (int z=1;z<100;z++){
cout << "Ingresa un numero decimal y te lo paso a binario: \n";
cin >> x;

if (x>=16384&&x<32768){
    x=x-16384;
    o=1;
}
if (x>=8192&&x<16384){
    x=x-8192;
    l=1;
}
if (x>=4096&&x<8192){
    x=x-4096;
    n=1;
}
if (x>=2048&&x<4096){
    x=x-2048;
    m=1;
}


if (x>=1024&&x<2048){
    x=x-1024;
    k=1;
}
if (x>=512&&x<1024){
    x=x-512;
    j=1;
}
if (x>=256 &&x<512 ){
    x=x-256;
    i=1;

}
if (x>=128&&x<256){
    x=x-128;
    h=1;
}

if (x>=64&&x<128){
    x=x-64;
    g=1;
}
if (x>=32&&x<64){
    x=x-32;
    f=1;
}
if (x>=16 &&x<32 ){
    x=x-16;
    e=1;

}
if (x>=8&&x<16){
    x=x-8;
    d=1;
}
if (x>=4&&x<8){
    x=x-4;
    c=1;
}
if (x>=2&&x<4 ){
        x=x-2;
        b=1;

}
if (x>=1&&x<2){
        a=1;
}
cout<<"---------------------------------- \n";

cout <<"|16384|"<<"|8192|"<<"|4096|"<<"|2048|"<<"|1024|"<<"|512|"<<"|256|"<<"|128|"<<"|64|"<<"|32|"<<"| 16|"<<"| 8|"<<"| 4|"<<"| 2|"<<"| 1|"<<endl;
cout <<"  "<<o<<"    "<<"  "<<l<<"   "<<"  "<<n<<"   "<<"  "<<m<<"   "<<"  "<<k<<"     "<<j<<"    "<<i<<"    "<<h<<"    "<<g<<"   "<<f<<"  ""  "<<e<<"  "" "<<d<< "  "<<" "<<c<<"   "<<b<<"   "<<a<<endl;
system("pause");
 a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,m=0,n=0,l=0,o=0,p=0,q=0;
}
    return 0;
}
