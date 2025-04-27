#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2, num3;
	cout << "Ingrese el primer numero: ";
	cin >> num1;

	cout << "Ingrese el segundo numero: ";
	cin >> num2;
	cout << "Ingrese el tercer numero: ";
	cin >> num3;

	// operacion logica
	if (num1 == num2 && num2 == num3){
		cout<< " Los tres numeros son iguales ";
	}
	else{
		cout<< " Lamnetablemente los tres numeros no son iguales ";

	}
	system("pause");
	return 0;
}

