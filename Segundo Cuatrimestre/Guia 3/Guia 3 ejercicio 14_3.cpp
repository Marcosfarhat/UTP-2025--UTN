#include <iostream>
using namespace std;

int main() {
    int numero;
    int primerImpar, segundoImpar=0, anteultimoImpar=0, ultimoImpar=0;
    int cantidadImpares = 0;

    for (int i = 0; i < 7; i++) {
        cout<< i << " Ingrese un numero "<< endl;
        cin >> numero;

        if (numero % 2 != 0) {
            cantidadImpares++;

            if (cantidadImpares == 1){
                primerImpar = numero;
            }
            else if (cantidadImpares == 2) {
                segundoImpar = numero;
            }

            // Siempre que se encuentra un impar, se actualiza anteúltimo y último
            anteultimoImpar = ultimoImpar;
            ultimoImpar = numero;
        }
    }

    if (cantidadImpares >= 2) {
        cout << "Primer impar: " << primerImpar << endl;
        cout << "Segundo impar: " << segundoImpar << endl;
        cout << "Anteúltimo impar: " << anteultimoImpar << endl;
        cout << "Último impar: " << ultimoImpar << endl;
    } else {
        cout << "No hay suficientes números impares." << endl;
    }

    return 0;
}
