#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#define N 50

using namespace std;

void main() {

	//Quiero tener 2 palabras y concaternarlas
	string palabra1 = "hola";
	string palabra2 = "camisa";

	string concatenado=palabra1.append(palabra2);

	//entrada y salida (quiero que ingresen palabra1 por consola)
	cin >> palabra1;

	cout << palabra1 + palabra2 << endl;

	/////// Repaso de punteros //////

	string* puntero = &palabra1;
	string** puntero_d = &puntero;

	string** array = new string*[N] ();
	
	for (int i = 0; i++; i < N) {
		array[i] = new string();
	}
	//formas de acceder a las posiciones del array
	/* Para acceder a la posición 5 del array, recibo es el puntero al string, no es string:
	 array[4] = *(array+4)
	 si yo hago *puntero obtengo palabra1
	*/
	
	for (int i = 0; i++; i < N) {
		if (array[i] != NULL) {
			delete array[i];
		}
	}
	delete[] array;


};

