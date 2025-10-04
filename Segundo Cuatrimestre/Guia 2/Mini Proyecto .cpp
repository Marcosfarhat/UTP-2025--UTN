#include <iostream>
#include <locale.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Español
    setlocale(LC_ALL, "Spanish");
    // declaro variables
    int ataque_fisico, ataque_magico, puntos_salud;
    int cascada_1_fisico,cascada_1_magico,escudo_valor,cascada_2_fisico,cascada_2_magico, cascada_3_fisico,cascada_3_magico,cascada_4_fisico,cascada_4_magico;
    int salud_C1,salud_C2,salud_C3,salud_C4;
    char escudo;

    // Ingresar datos

    cout <<"===== Cascada Mixtas ======="<< endl;
    cout << "Ingrese puntos de ataque fisico: " ;
    cin>> ataque_fisico;
    cout << "Ingrese puntos de ataque magico: ";
    cin>> ataque_magico;

    cout <<"===== Cascada del enemigo ======="<< endl;
    cout << "Ingrese puntos de salud del enemigo: ";
    cin>> puntos_salud;
    cout << "Ingrese tipo de escudo (F: Fisico, A:Arcano, N: Ninguno) : ";
    cin>> escudo;
    switch (escudo){
        case 'F':
        case 'f':
            escudo_valor = 1;

            break;
        case 'A':
        case 'a':
            escudo_valor = 2;
            break;
        case 'N':
        case 'n':
            //escudo_valor=0;
            break;
    }
    // Calculo de ataque sin escudo
            cascada_1_fisico = (ataque_fisico/2);
            cascada_1_magico = (ataque_magico/2);
            cascada_2_fisico = (ataque_fisico*30/100);
            cascada_2_magico = (ataque_magico/2);
            cascada_3_fisico = (ataque_fisico*10/100);
            cascada_3_magico = (ataque_magico*20/100);
            cascada_4_fisico = 0;
            cascada_4_magico = ataque_magico;

    // Con escudo

    if (escudo_valor == 1){
            cout<<"escudo valor 1 =fisico "<< endl;
            cascada_1_fisico =  cascada_1_fisico-(30*cascada_1_fisico/100);
            cascada_2_fisico = cascada_2_fisico-(30*cascada_2_fisico/100);
            cascada_3_fisico = cascada_3_fisico -(30*cascada_3_fisico/100);

    }
    if (escudo_valor==2){
            cascada_1_magico = (cascada_1_magico)-(30*cascada_1_magico/100);
            cascada_2_magico = cascada_2_magico-(30*cascada_2_magico/100);
            cascada_3_magico =  cascada_3_magico-(30*cascada_3_magico/100);
            cascada_4_magico = cascada_4_magico-(30*cascada_4_magico/100);
    }
    // Salud restatente - puntos de salud
    salud_C1 =  puntos_salud-cascada_1_fisico-cascada_1_magico;
    salud_C2 =  puntos_salud-cascada_2_fisico-cascada_2_magico;
    salud_C3 =  puntos_salud-cascada_3_fisico-cascada_3_magico;
    salud_C4 =  puntos_salud-cascada_4_fisico-cascada_4_magico;


    cout<<" ======= Tabla de Daños ======== "<< endl;
    cout<< "    Cascada Daño Fisico        Daño Magico   Daño Total    Salud Restante "<< endl;
    cout<< "--------------------------------------------------------------------------- "<< endl;
    cout << "1"<<setw(13)<< cascada_1_fisico <<setw(19) <<cascada_1_magico <<setw(15)<<cascada_1_fisico+cascada_1_magico<<setw(15)<< salud_C1<< endl;
    cout<<endl;
    cout << "2"<<setw(13)<< cascada_2_fisico <<setw(19) <<cascada_2_magico <<setw(15)<<cascada_2_fisico+cascada_2_magico<<setw(15)<< salud_C2<< endl;
    cout<<endl;
    cout << "3"<<setw(13)<< cascada_3_fisico <<setw(19) <<cascada_3_magico <<setw(15)<<cascada_3_fisico+cascada_3_magico<<setw(15)<< salud_C3<< endl;
    cout<<endl;
    cout << "4"<<setw(13)<< cascada_4_fisico <<setw(19) <<cascada_4_magico <<setw(15)<<cascada_4_fisico+cascada_4_magico<<setw(15)<< salud_C4<< endl;
    // Esta vivo o no, puntos de salud
    puntos_salud = salud_C1;
    if ( puntos_salud > salud_C2){
            puntos_salud = salud_C2;
    }
    if ( puntos_salud > salud_C3){
            puntos_salud = salud_C3;
    }
    if ( puntos_salud > salud_C4){
            puntos_salud = salud_C4;
    }
    if (puntos_salud>=0){
            cout<<"El enemigo sobrevive con "<< puntos_salud<< " puntos de salud";
    }
    else{
         cout<<"El enemigo a sido derrotado" << endl;
    }
    return 0;
}
