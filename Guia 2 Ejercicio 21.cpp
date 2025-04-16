#include <iostream>
using namespace std;
int main(){
    //Declaro variables
    int b=45,  n=50,  m=40, g=49, cont_cart_vendidas=0, cantidad, color;


    // Ingreso de datos -1  -Cantidad de carteras
    cout <<"Venta 1" <<endl<<" Ingrese cantidad de carteras requeridas: " << endl;
    cin >> cantidad;
    // Color
    cout<< " Ingrese Color: " << endl << " 1-Blanco 2-Negro, 3- Marron, 4-Gris" << endl;
    cin >> color;
    // Resta de cartera vendida por color
    switch(color){
    case 1:
        b = b-cantidad;
        cont_cart_vendidas ++;
        break;
    case 2:
        n = n-cantidad;
        cont_cart_vendidas ++;
        break;

    case 3:
        m = m-cantidad;
        cont_cart_vendidas ++;
        break;
    case 4:
        g = g-cantidad;
        cont_cart_vendidas ++;
        break;
     default:
        cout << "Valor mal ingresado"<< endl;

        }

            // Ingreso de datos -2  -Cantidad de carteras
    cout <<" Venta 2" <<endl<<" Ingrese cantidad de carteras requeridas: " << endl;
    cin >> cantidad;
    // Color
    cout<< " Ingrese Color: " << endl << " 1-Blanco 2-Negro, 3- Marron, 4-Gris" << endl;
    cin >> color;
    // Resta de cartera vendida por color
    switch(color){
    case 1:
        b = b-cantidad;
        cont_cart_vendidas ++;
        break;
    case 2:
        n = n-cantidad;
        cont_cart_vendidas ++;
        break;

    case 3:
        m = m-cantidad;
        cont_cart_vendidas ++;
        break;
    case 4:
        g = g-cantidad;
        cont_cart_vendidas ++;
        break;
     default:
        cout << "Valor mal ingresado"<< endl<< endl ;
        }

        // Ingreso de datos -3  -Cantidad de carteras
    cout << "Venta 3" <<endl<<" Ingrese cantidad de carteras requeridas: " << endl;
    cin >> cantidad;
    // Color
    cout<< " Ingrese Color: " << endl << " 1-Blanco 2-Negro, 3- Marron, 4-Gris" << endl;
    cin >> color;
    // Resta de cartera vendida por color
    switch(color){
    case 1:
        b = b-cantidad;
        cont_cart_vendidas ++;
        break;
    case 2:
        n = n-cantidad;
        cont_cart_vendidas ++;
        break;

    case 3:
        m = m-cantidad;
        cont_cart_vendidas ++;
        break;
    case 4:
        g = g-cantidad;
        cont_cart_vendidas ++;
        break;
    default:
        cout << "Valor mal ingresado" << endl;
        }
    // Cantidad de carteras vendidas
    cout << endl;
    cout << "Cantidad de carteras vendidas: " <<endl<<  cont_cart_vendidas<<endl;
    cout << endl;
    // Cantidad de stock
    cout << "Carteras en stock:" << endl ;
    cout <<endl<< "Carteras Blancas: " << b << endl<< "Carteras Negras: " << n<< endl << "Carteras Marrones: " <<m << endl << "Carteras Grises: " << g<< endl;
    cout << endl;
    //Colores de carteras que no se vendieron
    cout << " Colores de carteras que no se vendieron"<<endl;

     if (b == 45){
        cout<< " No se vendieron carteras Blancas;"<< endl;
     }

     if (n == 50){
        cout<< " No se vendieron carteras Negras;"<< endl;
     }
     if (m == 40){
        cout<< " No se vendieron carteras Marrones;"<< endl;
     }
     if (g == 49){
        cout<< " No se vendieron carteras Grices;"<< endl;
     }








    return 0;
}
