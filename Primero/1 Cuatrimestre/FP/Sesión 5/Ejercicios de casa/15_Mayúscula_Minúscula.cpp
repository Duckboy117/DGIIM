/*	Programa que obliga al usuario a introducir 
	una letra may�scula, mediante una estructura de bucle,
	para, posteriormente, imprimir su correspondiente min�scula */
	
#include <iostream>

using namespace std;

int main(){
	char mayuscula;
	char minuscula;
	const int DISTANCIA = 'a'-'A';
	
	do{
		cout << "\n\nIntroducir una letra may�scula: ";
		cin >> mayuscula;
	}while ( mayuscula > 'A' && 'Z' < mayuscula);
	
	minuscula = mayuscula + DISTANCIA;
	
	cout << "\nLa correspondiente min�scula es: " << minuscula;
	
	cout << "\n\n";
	
	system ("pause");
}
